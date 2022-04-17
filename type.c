#include <stdio.h>
#include <stdlib.h>
// #include "helloword.c"
/**
 * char和unsigned char--数据类型区别
 * 参考：https://www.cnblogs.com/dpf-learn/p/6109012.html
 * extern 参考：https://blog.csdn.net/xingjiarong/article/details/47656339
 * 
 */

int main(int argc, char const *argv[])
{
    int a = 10;
    printf("a size %d \n", sizeof(a));
    //16进制输出
    printf("a address %#x \n", a);
    printf("a address 0x%x \n", a);
    //8进制输出
    printf("a address %#o \n", a);
    //也是16进制输出只是左边补0 和%#x的区别
    printf("a address %p \n", a);
    //以指数形式输出实数
    printf("a address %e \n", a);

    float f, x = 3.6, y = 5.2;
    int i = 4, a1, b;
    a1 = x + y;
    b = (int)(x + y);
    f = 2.5;
    printf("a1=%d,b=%d,f=%f,x=%.3f\n", a1, b, f, x);
    double z = 3.141592743;
    printf("z is %lf \n", z);
    float k = 3.141592743;
    printf("k is %f \n", k);
    //num 声明在下面按正常顺序是不行的，用extern告诉编译器去找，java就无所谓
    extern int num;
    printf("num is %d \n", num);

    // extern int kx;
    // printf("kx is %d \n", kx);

    return 0;
}
int num = 3;
