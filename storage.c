#include <stdio.h>
#include <stdlib.h>
/**
 * @brief 
 * C中的static可以修饰局部变量（java不行），被static修饰的局部变量表示这个函数执行完后，这个变量不被释放，其值仍然保存着，然后下次访问该函数时，这个变量的值即为上一次函数执行完后它的值。
   同时C中如果用static修饰全局变量或函数，那么就表示该全局变量或函数不能被其他文件访问。
 * @param x 
 * @param y 
 * @return int 
 */
static int test(int x, int y)
{
    static int count = 100;
    count++;
    printf("test count is %d\n", count);
    return x + y;
}
int main(int argc, char const *argv[])
{
    int mount;
    //auto 存储类是所有局部变量默认的存储类。
    auto int month;
    month = 2;
    //存在寄存器的东西，只能修饰特定的类型，局部变量，加速用的
    //参考https://blog.csdn.net/21aspnet/article/details/257511
    register int miles;
    miles = 3;

    extern int num;

    static int hsc = 101;
    printf("month is %d\n", month);
    printf("miles is %d\n", miles);
    printf("num is %d\n", num);
    printf("hsc is %d\n", hsc);
    int result = test(1, 2);
    printf("result is %d\n", result);
    //c++自动推断类型
    // auto z = 10;
    // printf("z is %d\n", z);
    return 0;
}
int num = 100;
