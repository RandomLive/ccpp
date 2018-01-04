/*

	export DYLD_FORCE_FLAT_NAMESPACE=1
	export DYLD_INSERT_LIBRARIES=~/xd.dylib

*/



#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include "pthread.h"

#include <sys/types.h>
#include <sys/ptrace.h>
#include <sys/sysctl.h>

#include <mach/mach.h>
#include <mach/mach_init.h>
#include <mach/mach_vm.h>

mach_vm_address_t getBasicAddress(mach_port_t task){
	mach_vm_size_t region_size = 0;
	mach_vm_address_t region = NULL;
	int ret = 0;

	  /* Get region boundaries */
#if defined(_MAC64) || defined(__LP64__)
	vm_region_basic_info_data_64_t info;
	mach_msg_type_number_t info_count = VM_REGION_BASIC_INFO_COUNT_64;
	vm_region_flavor_t flavor = VM_REGION_BASIC_INFO_64;
	if ((ret = mach_vm_region(mach_task_self(), &region, &region_size, flavor, (vm_region_info_t)&info,
		(mach_msg_type_number_t*)&info_count, (mach_port_t*)&task)) != KERN_SUCCESS)
	{
		printf("mach_vm_region() message %s!\n",mach_error_string(ret));
		return NULL;
	}
#else
	vm_region_basic_info_data_t info;
	mach_msg_type_number_t info_count = VM_REGION_BASIC_INFO_COUNT;
	vm_region_flavor_t flavor = VM_REGION_BASIC_INFO;
	if ((ret = vm_region(mach_task_self(), &region, &region_size, flavor, (vm_region_info_t)&info,
		(mach_msg_type_number_t*)&info_count, (mach_port_t*)&task)) != KERN_SUCCESS)
	{
		printf("vm_region() message %s!\n",mach_error_string(ret));
		return NULL;
	}
#endif
	return region;
}
vm_size_t readRemotoMemory(char *buf,vm_size_t len,mach_port_t task,vm_address_t address)
{
	vm_size_t outSize = 0;

	int ret = vm_read_overwrite(task,address,len,(vm_address_t)buf,&outSize);
	if (ret != 0)
	{
		printf("vm_read_overwrite() message %s!\n",mach_error_string(ret));
		return 0;
	}
	return outSize;
}

//int main(int argc, char const *argv[])
void* handler(void *p)
{
	//int pid = 16057;
	int pid = getpid();
	char buffer[512];
	mach_vm_address_t address = 0;
	mach_port_t task = 0;

	int waitTime = 15;
	while(waitTime){
		sleep(1);
		printf("thread waiting! %d\n",waitTime);
		waitTime --;
	}

	int ret = task_for_pid(mach_task_self(),pid,&task);
	if (ret != 0)
	{
		printf("task_for_pid() message %s!\n",mach_error_string(ret));
		return NULL;
	}
	address = getBasicAddress(task);

	printf("pid     : %d\n",pid);
	printf("task    : %x\n", task);
	printf("address : %llx\n", address);

	if (address == 0)
	{
		printf("getBasicAddress() faild!\n");
		return NULL;
	}

	uint32_t writeSize = 0;
	FILE *fp = fopen("dump.bin","wb");
	readRemotoMemory(buffer,512,task,address);
	printf("%x\n",*(uint*)buffer);

	while (writeSize <= 0x1F8E){
		readRemotoMemory(buffer,512,task,address);
		//printf("%x\n",*(uint*)buffer);
		address += 512;
		writeSize += 512;
		fwrite(buffer,512,1,fp);
	}

	return NULL;
}

void __attribute__((constructor)) init()
{
	int err;
	pthread_t ntid;
    err = pthread_create(&ntid, NULL, handler, NULL);
    if (err != 0)
    {
    	printf("can't create thread: %s\n", strerror(err));
    	return ;
    }
}
