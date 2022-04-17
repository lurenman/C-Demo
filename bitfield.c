#include <stdio.h>
/**
  位域参考：https://blog.csdn.net/zhengnianli/article/details/87386078 
 */
struct pack
{
    unsigned a : 2; // 取值范围为：0~3
    unsigned b : 4; // 取值范围为：0~15
    unsigned c : 6; // 取值范围为：0~63
};
typedef struct A
{
    unsigned int a : 2; // 取值范围为：0~3
    unsigned int b : 4; // 取值范围为：0~15
    unsigned int c : 6; // 取值范围为：0~63
} AA;
typedef struct B
{
    int a : 2;
    int b : 4;
    int c : 6;
} BB;
int main(int argc, char const *argv[])
{
    AA pa;
    printf("the pa size is %d \n", sizeof(pa));
    pa.a = 3;
    printf("the pa.a  is %d \n", pa.a);
    BB pb;
    printf("the pb size is %d \n", sizeof(pb));
    pb.a = -2;
    printf("the pb.a  is %d \n", pb.a);
    return 0;
}
