#include <stdio.h>
/**
 * @brief 
 * 参考：https://blog.csdn.net/thelostlamb/article/details/79304203
 * 和python 一样用cmd执行 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char const *argv[])
{
    int i;
    for (i = 0; i < argc; i++)
        printf("第 %d 个参数是 %s\n", i + 1, argv[i]);

    return 0;
}
