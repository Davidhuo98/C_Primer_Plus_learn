//字段宽度
#include<stdio.h>
#define PAGES 959
int main(void) {
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%20d*\n",PAGES);
    printf("*%-20d*\n",PAGES);

    return 0;




}
