//误用=会导致无限循环
#include<stdio.h>
int main(void) {
    long num;
    long sum =0L;
    int status;

    printf("Please enter an integer to be summed");
    printf("(q to quit):\n ");
    status=scanf("%ld",&num);
    while(status=1)//这个麻烦的程序示例改动了while循环的测试条件，把status == 1替换成status = 1
        {
        sum = sum + num;
        printf("Please enter next integer (q to quit):\n");
        status=scanf("%ld",&num);
    }
    printf("Those integers sum to %ld.\n",sum);
    return 0;
}
