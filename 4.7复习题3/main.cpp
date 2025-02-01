#include <stdio.h>
int main(void) {

    float height;
    char name[50];
    printf("Please enter your height:\n");
    scanf("%f",&height);
    printf("Please enter your name:\n");
    scanf(" %s",&name);
    printf("%s, you are %.3f feet tall",name,height);

    return 0;


}