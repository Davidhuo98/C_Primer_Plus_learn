#include<stdio.h>
int main(void)
{
    char name[50];
    unsigned long str;
    printf("please enter your name.\n");
    scanf("%[^\n]",&name);
    str = strlen(name);
    printf("OK,so I call you \"%*s\"",strlen(name)+3,name);


    return 0;
}
