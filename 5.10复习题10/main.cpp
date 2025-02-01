#include <stdio.h>
int main(void)
{
    int x = 100;

    while (x++ < 103)
        printf("%4d\n",x);

    printf("%4d\n",x);

    return 0;
}

//注意，第一个printf在x变为101、102和103时分别打印了x的值，但由于它是在x++之后执行的，所以打印的是递增后的值
//循环在x即将变为104时停止，但第二个printf在循环结束后执行，此时x的值已经是104了