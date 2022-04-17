#include <stdio.h>
#include <stdlib.h>
enum DATE
{
    MON = 1,
    TUE
};
void testM1();
void testM2();
void testM3();
void testM4();
void testM5();
void testM6();
void testM7(int *arr);
void testM8(enum DATE date);
int *testM9();
int *testM10(int *ar);
void testM11();
void testM12(int (*p)(int, int));
int maxValue(int a, int b)
{
    int max = a > b ? a : b;
    return max;
}
//指针
int main(int argc, char const *argv[])
{
    // int a = 1;
    // int *p = &a;
    // printf("the a address %p \n", p);
    // printf("the a value %d \n", *p);
    // printf("the *(p+1) value %d \n", *(p + 1));
    //testM1();
    //testM2();
    //testM3();
    //testM4();
    //testM5();
    //testM6();
    // int arr[] = {1, 2, 3, 4};
    // int length = sizeof(arr) / sizeof(int);
    // printf("the arr length %d \n", length);
    // testM7(arr);
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("the arr[%d] %d \n", i, arr[i]);
    // }
    //枚举看成单例
    // enum DATE date;
    // date = TUE;
    // testM8(date);
    // int *ar;
    // ar = testM9();
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("the ar[%d] %d \n", i, ar[i]);
    // }
    // int arr[] = {1, 2, 3, 4};
    // int *arr1 = testM10(arr);
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("the arr1[%d] %d \n", i, arr1[i]);
    // }
    testM11();
    testM12(maxValue);
    return 0;
}
//指针在数组中的遍历
void testM1()
{
    //指针在数组中的遍历
    int arr[] = {4, 5, 6, 7};
    int *p;
    //int 类型指针指向数组首地址
    p = &arr[0]; //p = arr; 这也是指向首地址
    int lengh = sizeof(arr) / sizeof(int);
    for (int i = 0; i < lengh; i++)
    {
        printf("the testM1 index %d value %d \n", i, *p);
        p++;
    }
}
void testM2()
{
    //指针在数组中的遍历
    int arr[] = {4, 5, 6, 7};
    int *p;
    //int 类型指针指向数组首地址
    p = arr;
    int lengh = sizeof(arr) / sizeof(int);
    while (p <= &arr[lengh - 1])
    {
        printf("the testM2 value %d \n", *p);
        p++;
    }
}
void testM3()
{
    //指针在数组中的遍历
    int arr[] = {4, 5, 6, 7};
    //指针数组要指定大小
    int *p[4];
    int lengh = sizeof(arr) / sizeof(int);
    for (int i = 0; i < lengh; i++)
    {
        p[i] = &arr[i];
    }
    for (int i = 0; i < lengh; i++)
    {
        printf("the testM3 value %d \n", *p[i]);
    }
}
void testM4()
{
    // int arr[] = {4, 5, 6, 7};
    // //指针数组要指定大小
    // int *p[] = {4, 5, 6, 7};
    // int lengh = sizeof(arr) / sizeof(int);

    // for (int i = 0; i < lengh; i++)
    // {
    //     printf("the testM4 value %d \n", p[i]);
    // }
    const char *names[] = {
        "Zara Ali",
        "Hina Ali",
        "Nuha Ali",
        "Sara Ali",
    };
    int i = 0;

    for (i = 0; i < 4; i++)
    {
        printf("Value of names[%d] = %s\n", i, names[i]);
    }
}
void testM5()
{
    char *str = "abc";
    printf("the *str %c \n", str);
    printf("the *str %s \n", str);
    printf("the *str %c \n", *str);
    printf("the *str %c \n", *(++str));
    printf("the *str %c \n", *(++str));
    printf("the *str %s \n", str);
}
/**
 * @brief 
 * 二级指针,体会一下地址
 */
void testM6()
{
    int a = 100;
    int *p;
    int **vp;
    p = &a;
    vp = &p;
    printf("the a address %p \n", &a);
    printf("the p address %p \n", p);
    printf("the *p value %d \n", *p);
    printf("the vp address %p \n", vp);
    printf("the *vp address %p \n", *vp);
    printf("the **vp value %d \n", **vp);
}
/**
 * @brief 
 * 测试一个传递数组的操作
 */
void testM7(int *arr)
{
    int length = sizeof(arr) / sizeof(int);
    //长度变为2.why?
    printf("the arr length %d \n", length);
    for (int i = 0; i < 4; i++)
    {
        arr[i] = arr[i] + 10;
    }
}
void testM8(enum DATE date)
{
    printf("the enum date is %d \n", date);
}
/**
 * @brief 
 * 这种是返回函数指针
 * @return int* 
 */
int *testM9()
{ //C 语言不支持在调用函数时返回局部变量的地址，除非定义局部变量为 static 变量。
    static int ar[] = {1, 2, 3};
    return ar;
}
int *testM10(int *ar)
{
    ar[0] = 100;
    return ar;
}
/**
 * 函数指针
 * 
 */
void testM11()
{ //指针要加上括号;
    int (*p)(int, int) = maxValue;
    //加不加&都可以
    //int (*p)(int, int) = &maxValue;
    printf("the max value %d \n", p(100, 200));
}
/**
  回调函数，其实就是通过指针传递函数
  kotlin和grovy都有java没有，python带研究
 */
void testM12(int (*p)(int, int))
{
    int max = p(300, 500);
    printf("the max value %d \n", max);
}