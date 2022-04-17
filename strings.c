#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * @brief 
 * 要区别 这种 char * str 和 char str[],不同函数调用问题可参考
 * https://blog.csdn.net/zhengnianli/article/details/98031754
 * https://blog.csdn.net/qq_40946787/article/details/79154671
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char const *argv[])
{
    char *str1 = "abc";
    char *str2 = "def";
    //涉及到copy的操作就理这么声明;
    char str3[3];
    printf("the strlen() is %d \n", strlen(str1));
    printf("the strcasecmp(str1,str2) is %d \n", strcasecmp(str1, str2));
    printf("the strcmp(str1, str2) is %d \n", strcmp(str1, str2));
    strcpy(str3, str1);
    printf("the strcpy(str3,str1) str3 is %s \n", str3);

    char str4[] = "abc";
    char str5[] = "edg";
    strcat(str4, str5);
    printf("the strcat(str4,str5) str4 is %s \n", str4); //abcedg
    printf("the strcat(str4,str5) str5 is %s \n", str5); //edg

    char str6[] = "zzz";
    char str7[] = "zzz";
    //这种不行 kt可以，java用equal，why：大概是新申请的变量，字符数组是可以修改的
    if (str6 == str7)
    {
        printf("str6==str7 \n");
    }
    //字符串比较用strcmp这种
    if (strcmp(str6, str7) == 0)
    {
        printf("strcmp(str6,str7)==0 \n");
    }

    char *str8 = "ddd";
    char *str9 = "ddd";
    //这种为true why：这种存在常量区，不可修改的，所以strcpy 不行
    if (str8 == str9)
    {
        printf("str8==str9 \n");
    }

    return 0;
}
