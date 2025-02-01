#include<stdio.h>
int main(void)
{
    float i = 1;
    float n;
    printf("Watch out! Here come a bunch of fractions!\n");
    while (i< 30)
    {
        n = 1/i;
        i = i+1;
        printf(" %f\n",n);
    }
    printf("That's all, folks!\n");

    return 0;
}