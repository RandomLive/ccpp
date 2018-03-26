#include <stdio.h>

struct client {
  char code;
  long id;
  char name[32];
  struct client *next;
};

void print_clients(struct client *);

int main()
{
    struct client myClient = { 10, 100L, "suxiaolin", NULL };
    print_clients(&myClient);
}

void print_clients(struct client *ptr) {
  while ( ptr != NULL ) {
    printf("code: %d ID: %4ld Name: %-32s\n",ptr->code, ptr->id, ptr->name);
    ptr = ptr->next;
  }
}
