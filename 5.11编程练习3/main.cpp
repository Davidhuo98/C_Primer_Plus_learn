#include<stdio.h>
#define day_to_week 7
int main(void) {

    int day;
    int week;
    int day_left;

    printf("Please enter the days(quit <=0):\n");
    scanf("%d",&day);
    while(day>0)
    {
        week = day/day_to_week;
        day_left =day % day_to_week;
        printf("%d days are %d weeks, %d days,want to continue?(<=0 to quit)\n",day,week,day_left);
        scanf("%d",&day);

    }
    printf("Done!\n");
    return 0;
}