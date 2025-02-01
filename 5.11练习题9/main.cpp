#include<stdio.h>

void Temperatures(double Fahrenheit);

int main(void)
{
    double Fahrenheit;
    int result; // 用于存储scanf的返回值

    printf("Please enter a degree Fahrenheit (or non-numeric to quit):\n");

    while(1) // 使用无限循环
    {
        result = scanf("%lf", &Fahrenheit); // 尝试读取一个double

        if(result == 1) // 如果成功读取了一个double
        {
            Temperatures(Fahrenheit);
            printf("So enter a next number or non-numeric to quit:\n");
        }
        else // 如果读取失败（比如因为输入了非数字）
        {
            // 清除输入缓冲区中的错误输入
            while(getchar() != '\n');
            printf("Invalid input. Please enter a number or non-numeric to quit.\n");

            // 询问是否继续，或者根据需求直接退出
            // 这里为了简化，我们直接退出循环
            break; // 退出循环
        }
    }

    //printf("Done\n");
    return 0;
}

void Temperatures(double Fahrenheit)
{
    double Celsius = 5.0/9.0*(Fahrenheit-32.0);
    double Kelvin = Celsius + 273.16;
    printf("Fahrenheit: %.2lf°F \n", Fahrenheit);
    printf("Celsius: %.2lf°C \n", Celsius);
    printf("Kelvin: %.2lfK \n", Kelvin);
}