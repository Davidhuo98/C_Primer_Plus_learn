//使用for循环创建一个立方计算表
#include<stdio.h>
int main(void) {
    int num;
    printf("    n   n cubed\n");
    for(num=1;num<=6;num++)
        printf("%5d %5d\n",num,num*num*num);

    return 0;
}