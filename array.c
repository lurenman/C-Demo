#include <stdio.h>
#include <stdlib.h>
void test(int *p);
int main(int argc, char const *argv[])
{    
    //数组【】定义在变量后面，java随意
    int intarray[] = {100, 101, 102, 103, 104};
    printf("intarray is %s \n", intarray);
    test(intarray);
    //获取数组的长度的方法
    int count = sizeof(intarray) / sizeof(intarray[0]);
    for (int i = 0; i < count; i++)
    {
        printf("the element intarray index %d value %d \n", i, intarray[i]);
    }

    return 0;
}
void test(int *p)
{
    p[0] = 1;
    p[1] = 2;
    //不存在越界这说
    p[100]=1111;
}
