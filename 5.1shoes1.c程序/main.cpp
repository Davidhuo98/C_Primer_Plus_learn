//把鞋码换成英寸
#include<stdio.h>
#define ADJUST 7.31  //字符常量
int main(void) {

    const double SCALE = 0.333; //const变量
    double shoe,foot;
    shoe = 9.0;
    foot = SCALE*shoe+ADJUST;//foot表示脚长
    printf("Shoe size foot length\n");
    printf("%10.1f %15.2f inches\n",shoe,foot);

    return 0;

}
