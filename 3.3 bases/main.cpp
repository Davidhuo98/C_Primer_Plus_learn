//以十进制、八进制、十六进制打印十进制数100
#include<stdio.h>
int main(void)
{
    int x = 100;

    printf("dec = %d; octal = %o; hex = = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
    //在八进制和十六进制值前显示0和0x前缀，要分别在转换说明中加入#
    return 0;


}