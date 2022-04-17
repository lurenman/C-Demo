#include <stdio.h>
#include <stdarg.h>
//参考:https://www.cnblogs.com/edver/p/8419807.html
int fun(int num, ...)
{
    va_list valist;
    /* 为 num 个参数初始化 valist */
    va_start(valist, num);
    printf("the valist is %d \n", *valist);
    for (int i = 0; i < num - 1; i++)
    { //指向下个指针,这里把vl往后跳过4个字节（sizeof(int)大小）指向下一个参数，返回的是当前参数（而非下一个参数）
        int result = va_arg(valist, int);
        printf("the result is %d \n", *valist);
    }
    va_end(valist); //结束标志
}
int main(int argc, char const *argv[])
{
    fun(4, 5, 6, 7, 8);
    return 0;
}
