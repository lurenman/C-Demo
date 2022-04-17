#include <stdio.h>
#include <stdlib.h>
//枚举常量里的实例定义过 就不能再定义了 类似于宏
//1、先定义枚举类型，再定义枚举变量
enum DAY
{
    MON = 1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};
//2、定义枚举类型的同时定义枚举变量
enum TEST1
{
    AA,
    BB,
    CC
} test1;
//3、省略枚举名称，直接定义枚举变量
enum
{
    DD,
    FF,
    GG
} test2;
#define MON 1
const int a = 1;
void testM1(enum DAY day);
void testM2(enum DAY *day);
void testM3(enum DAY day);
int main(int argc, char const *argv[])
{
    enum DAY day;
    day = WED;
    // test1 = CC;
    // test2 = DD;
    // printf("the day is %d \n", day);
    // printf("the test1 is %d \n", test1);
    // printf("the test2 is %d \n", test2);
    // //在C 语言中，枚举类型是被当做 int 或者 unsigned int 类型来处理的，所以按照 C 语言规范是没有办法遍历枚举类型的。
    // //不过在一些特殊的情况下，枚举类型必须连续是可以实现有条件的遍历。
    // for (day = MON; day <= SUN; day++)
    // {
    //     printf("the day 枚举元素:%d \n", day);
    // }
    // testM1(day);
    // testM2(&day);
    testM3(day);
    printf("the day is %d \n", day);
    //将整数转换为枚举 略
    return 0;
}
/**
 * @brief 
 * 枚举通过指针怎么传过来，后面研究
 * @param day 
 */
void testM1(enum DAY day)
{
    switch (day)
    {
    case WED:
        printf("the testM1 WED");
        break;
    default:
        printf("the testM1 default");
        break;
    }
}
/**
 * @brief 引用传递
 * 
 * @param day 
 */
void testM2(enum DAY *day)
{
    printf("testM2 the day is %d \n", *day);
    *day = SAT;
    printf("testM2 the day is %d \n", *day);
}
/**
 * @brief 值传递
 * 
 * @param day 
 */
void testM3(enum DAY day)
{
    printf("testM3 the day is %d \n", day);
    day = SAT;
    printf("testM3 the day is %d \n", day);
}
