//显示字符的代号编号
#include<stdio.h>
int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c",&ch);  //用户输入字符
    printf("The ASCII code for %c is %d.\n", ch, ch);

    return 0;
}