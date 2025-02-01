#include <stdio.h>

int main(void) {
    float pint, ounce, spoon, tea_spoon;
    float cup;
    //int pint, ounce, spoon, tea_spoon;
    //int cup;
    printf("Please enter your cup numbers: ");
    scanf_s("%f", &cup);

    pint = cup / 2 ;
    ounce = cup * 8;
    spoon = ounce * 2;
    tea_spoon = spoon * 3;

    printf("Your pint numbers is %f.\n", pint);
    printf("Your ounce numbers is %f.\n", ounce);
    printf("Your spoon numbers is %f.\n", spoon);
    printf("Your tea spoon numbers is %f.\n", tea_spoon);


    return 0;
}