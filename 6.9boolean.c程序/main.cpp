//使用_bool类型的变量variable
#include<stdio.h>
int main(void) {
    long num;
    long sum =0L;
    bool input_is_good;

    printf("Please enter an integer to be summed");
    printf("(q to quit):\n");
    input_is_good= (scanf("%ld",&sum) == 1);
    while(input_is_good)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit):\n");
        input_is_good=(scanf("%ld",&num)==1);
    }
    printf("Those integers sum to %ld.\n",sum);
    return 0;

}