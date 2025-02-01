//计算数的整数幂
#include<stdio.h>
double power(double n, int p);//ANSI函数原型
int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised.(Enter q to quit)\n");

    while(scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);//函数调用
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");
//从用户输入中读取一个双精度浮点数到x，然后读取一个整数到exp,检查是否成功读取了两个值，如果是，则继续循环；否则退出循环
    return 0;
}
double power(double n, int p)//函数定义
{
    double pow = 1;
    int i;

    for(i = 1; i<=p; i++)
        pow *=n;
    return pow;//返回pow的值
}