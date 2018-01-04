#include <stdio.h>
#include <string.h>
#define NLEN 30
struct namect {
    char    fname[NLEN];
    char    lname[NLEN];
    int     letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
char * s_gets(char *st, int n);

int main(void)
{
    struct namect person;

    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);

    return 0;
}

void getinfo(struct namect * pst)
{
    printf("Please enter your first name.\n");
    s_gets(pst->fname, NLEN);
    printf("Please enter your last name.\n");
    s_gets(pst->lname, NLEN);
}

void makeinfo(struct namect * pst)
{
    pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect * pst)
{
    printf("%s %s, your name contains %d letters.\n", pst->fname, pst->lname, pst->letters);
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;
    ret_val = fgets(st, n, stdin);
    if (ret_val) { // 读到了输入的字符串，输入的字符串可能比n长，也可能比n短
        // 如果输入的字符串比n短，删除多读入的换行符
        find = strchr(st, '\n');
        if (find) {
            *find = '\0';
        } else { // 输入的字符串比n长
            // 还有部分输入的字符串留在了缓冲区，删除缓冲区中的多余的字符串，避免影响下次输入
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    // 返回指向这个读到的字符串的指针, 失败，返回空指针
    return ret_val;
}
