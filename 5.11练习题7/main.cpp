#include<stdio.h>
void cube3(double num);
int main(void) {
    double num;
    printf("Enter a double type number:\n");
    scanf("%lf", &num);
    cube3(num);
    return 0;
}
void cube3(double num)
{
    double cube;
    cube = num * num * num;
    printf("The cube of %lf is %lf\n", num, cube);
}