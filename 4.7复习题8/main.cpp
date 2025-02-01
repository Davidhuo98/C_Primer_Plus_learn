#include<stdio.h>
#define FUEL_CONSUME_L 3.785
#define DISTANCE_KM 1.609
int main(void)
{
    float distance;
    float fuel_consume;

    printf("please enter your trip distance(mile):\n");
    scanf("%f",&distance);
    //while (getchar() != '\n');
    printf("please enter your useage of gasoline(gallon):\n");
    scanf("%f",&fuel_consume);

    printf("(us)the car driving distance every gallon useage is %.1f miles/gallon\n",distance/fuel_consume);
    printf("(europe)the car driving 100 kilometers every liter fuel useage is %.1f L/km\n",(distance*DISTANCE_KM)/(fuel_consume*FUEL_CONSUME_L)*100);




}