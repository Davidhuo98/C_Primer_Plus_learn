//使用变宽输出字段
#include<stdio.h>
int main(void)
{
    unsigned width,precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%d",&width);
    printf("The number is: %*d\n",width,number);
    printf("Now enter a width and a precision:\n");
    scanf("%d %d",&width,&precision);
    printf("Weight = %*.*f\n",width,precision,weight);//%*.*f表示宽度和精度由后面的参数指定，f表示输出的是浮点数
    printf("Done!\n");

    return 0;


}