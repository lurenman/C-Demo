#include <stdio.h>
struct A
{
    int a;
    float b;
    char c;
};
//可以给结构体定义别名
typedef struct B
{
    int a;
    float b;
    char c;
    struct A ppA;
    struct A *pointA;
} BB;
struct C
{
    int a;
    float b;
    char c;
};
void test1(struct A p);
void test2(struct A *p);
int main(int argc, char const *argv[])
{
    struct A pA;
    pA.a = 100;
    // printf("pA.a is %d \n", pA.a);
    // printf("pA.b is %f \n", pA.b);
    // printf("sizeof(pA) is %d \n", sizeof(pA));
    // test1(pA);
    // printf("pA.a is %d \n", pA.a);
    // test2(&pA);
    // printf("pA.a is %d \n", pA.a);
    // BB pB;
    // pB.a = 111;
    // printf("pB.a is %d \n", pB.a);
    //字节数内存对齐
    // printf("sizeof(pB) is %d \n", sizeof(pB));
    //结构体可以这样赋值
    // struct C pC = {100,3.1415598765,'f'};
    // printf("pC.a is %d \n", pC.a);
    // printf("pC.b is %f \n", pC.b);
    // printf("pC.c is %c \n", pC.c);
    return 0;
}
/**
  这种还是值传递，不能改变值，类似于java浅拷贝;
 */
void test1(struct A p)
{
    printf("p.a is %d \n", p.a);
    p.a = 200;
    printf("p.a is %d \n", p.a);
}
/**
  这种是引用传递，可以改变值
 */
void test2(struct A *p)
{
    printf("p->a is %d \n", p->a);
    //访问用->, *p这种不行
    p->a = 200;
    printf("p->a is %d \n", p->a);
}
