#include <stdio.h>
#include <stdlib.h>
int kx = 3;
int ky = 5;
//声明的作用，这样程序可以调到下面，或者用extern
void test(int x, int y);
int addtwonum()
{
   return kx + ky;
}
int main()
{
   printf("aaa\n");
   // system("notepad");
   char *b = "zdasdasdasdsad";
   printf("b=%s\n", b);
   char c[] = "你好";
   printf("c=%s\n", c);
   char d[] = {'a', 'b', 'c', 'd', '\0'};
   printf("d=%s\n", d);
   test(1, 2);
   return 0;
}
void test(int x, int y)
{
   printf("the value is %d", x + y);
}
