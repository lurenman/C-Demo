#include <stdio.h>

#define HEIGHT 100
#undef HEIGHT      //取消定义
#define HEIGHT 200 //重新定义
#ifndef MESSAGE    // 如果没定义
#define MESSAGE "You wish!"
#endif
#ifdef DEBUG
/* Your debugging statements here */
#endif
#define message_for(a, b) \
    printf(#a " and " #b ": We love you!\n")
//标记粘贴运算符（##）
#define tokenpaster(n) printf("token" #n " = %d", token##n)
#define square(x) ((x) * (x))
int main(int argc, char const *argv[])
{
    printf("the HEIGHT is %d \n", HEIGHT);
    printf("the MESSAGE is %s \n", MESSAGE);
    // printf("File :%s\n", __FILE__);
    // printf("Date :%s\n", __DATE__);
    // printf("Time :%s\n", __TIME__);
    // printf("Line :%d\n", __LINE__);
    // printf("ANSI :%d\n", __STDC__);
    //message_for(Carole, Debra);
    // int token34 = 40;
    // tokenpaster(34);

    return 0;
}
