#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void test1(int a)
{
    switch (a)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("error\n");
    }
}
void test2()
{
    static int count = 0;
    for (;;)
    {
        sleep(500);
        count++;
        if (count >= 10)
        {
            printf("跳出循环\n");
            break;
        }
        printf("该循环会永远执行下去！\n");
    }
}
int main(int argc, char const *argv[])
{
    extern void test();
    test(4);
    test1(2);
    test2();
    return 0;
}
void test(int x)
{
    (x % 2 == 0) ? printf("偶数\n") : printf("奇数\n");
}
