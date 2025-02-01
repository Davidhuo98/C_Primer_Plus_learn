#include<stdio.h>
int main(void) {

    int num;
    printf("Please enter a integer:\n");
    scanf("%d",&num);
    int num_end = num + 10;
    while(num<num_end)
    {
         num = num + 1;
         printf("%d",num);
         printf("\n");
    }
    printf("Done!\n");
    return 0;

}
