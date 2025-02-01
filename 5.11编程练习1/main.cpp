#include<stdio.h>
#define min_to_hour 60
int main(void) {

    int min;
    int hour;
    int min_left;

    printf("Please enter the time by minutes(quit <=0):\n");
    scanf("%d",&min);
    while(min>0)
    {
        hour = min/min_to_hour;
        min_left =min % min_to_hour;
        printf("%d mins is %d hours and %d mins,want to continue?(quit <=0)\n",min,hour,min_left);
        scanf("%d",&min);

    }
    printf("Done!\n");
    return 0;
}