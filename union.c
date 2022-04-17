#include <stdio.h>
#include <string.h>
union A
{
    //int a=123; 不能直接赋值
    int a;
    float b;
    char str[20];
};

int main(int argc, char const *argv[])
{
    union A pA;
    pA.a = 100;
    pA.b = 2.13456695;
    //这种是不行的 char只有在定义的时候可以直接赋值
    //pA.str = "hellocsdasdad";
    strcpy(pA.str, "dasdvvfdf");
    printf("the pA.a is %d \n", pA.a);
    printf("the pA.b is %f \n", pA.b);
    printf("the pA.str is %s \n", pA.str);
    //size is 占用最大的那个
    printf("the sizeof(pA) is %d \n", sizeof(pA));

    union A pB;
    pB.a = 123;
    printf("the pB.a is %d \n", pB.a);
    pB.b = 3.23232155;
    printf("the pB.b is %f \n", pB.b);
    strcpy(pB.str, "hello,I from china");
    printf("the pB.str is %s \n", pB.str);

    return 0;
}
