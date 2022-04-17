#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char str[10] = "hellodds";
    char *p;
    //给指针分配空间
    p = (char *)malloc(20 * sizeof(char));
    //赋值
    p = str;
    printf("the p value is %s \n", p);

    //p = (char *)realloc(p, 30 * sizeof(char));
    // p = "zzzzzz";
    // printf("the realloc p value is %s \n", p);
    // free(p);
    //置位null，防止野指针
    //p = NULL;
    return 0;
}
