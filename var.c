#include <stdio.h>
#include <stdlib.h>

/**
 定义常量 
 */
//固定格式
#define LENGH 10
#define WIDTH 5
const int a = 2;
static int kz = 100;
//结构体后面研究
struct student
{
    int age;
    char name[];
};

int main(int argc, char const *argv[])
{
    printf("kz is %d \n", kz);
#define WIDTH_D 6
    int area = LENGH * WIDTH;
    printf("area is %d \n", area);
    printf("WIDTH_D is %d \n", WIDTH_D);

    printf("a is %d \n", a);

    const int b = 3;
    printf("b is %d \n", b);

    struct student stu;
    stu.age = 18;
    printf("stu.age is %d \n", stu.age);

    // char 一个字节里面一个字符
    char a1 = 'a';
    printf("a1 is %c \n", a1);
    // 在输入这个报错，后续研究alloc的原因
    //printf("a1 is %s \n", a1);
    //数组要加'\0'结束符
    char arr1[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("arr1 is %s \n", arr1);
    char *arr2 = "word";
    printf("arr2 is %s \n", arr2);
    //这种可以
    char arr3[] = "dd";
    printf("arr3 is %s \n", arr3);
    return 0;
}
