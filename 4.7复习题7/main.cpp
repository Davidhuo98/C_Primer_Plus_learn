#include<stdio.h>
#include <float.h>
int main(void) {
    double num1 = 1.0/3.0;
    float num2 = 1.0/3.0;

    printf("num1=%f\n",num1);
    printf("num2=%f\n",num2);
    printf("num1=%.12f\n",num1);
    printf("num2=%.12f\n",num2);
    printf("num1=%.16f\n",num1);
    printf("num2=%.16f\n",num2);

    printf("DEL_DIG:%d\n",DBL_DIG);
    printf("FLT_DIG:%d\n",FLT_DIG);


    return 0;


}