//出口条件循环
#include<stdio.h>
int main(void) {
    const int secret_code = 13;
    int code_entered;
    do {
        printf("To enter the triskaidekaphobia therapy club,\n");
        printf("please enter the secret code number:");
        scanf("%d",&code_entered);
    }while(code_entered !=secret_code);//如果条件为真（即用户输入的 code_entered 不等于预设的 secret_code），则继续循环，重新执行循环体内的代码
    printf("Congratulations!You are cured!");//如果条件为假（即用户输入的 code_entered 等于预设的 secret_code），则跳出循环，结束该过程

    return 0;
}