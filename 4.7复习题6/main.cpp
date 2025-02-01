#include <stdio.h>
#include<string.h>
int main(void) {
    char name1[50];
    char name2[50];
    int n1;
    int n2;

    printf("please enter your name1.\n");
    scanf("%s",&name1);
    while (getchar() != '\n');
    printf("please enter your name2.\n");
    scanf("%s",&name2);

    n1 = (int) strlen(name1);
    n2 = (int) strlen(name2);

    printf("%s %s\n",name1,name2);
    printf("%-*d %-*d\n",n1,n2,n2,n1);


}