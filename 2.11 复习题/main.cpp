#include <stdio.h>
void jolly(void);
void deny(void);
void br(void);
void ic(void);
void print_smile(void);
void one_three(void);
void two(void);
int main(void)
{
    int toes,toes_double,toes_squared;
    toes = 10;
    toes_double = toes + toes;
    toes_squared = toes * toes;

    printf("HUO HUANLIN\n");
    printf("HUO\nHUANLIN\n");
    printf("HUO ");
    printf("HUANLIN\n");
    printf("SHANGHAI BUSINESS SCHOOL\n");
    jolly();
    deny();
    br();
    printf(",");
    ic();
    ic();
    br();
    printf("\n");
    printf("toes的值为：%d\n", toes);
    printf("toes的两倍为：%d\n", toes_double);
    printf("toes的平方为：%d\n", toes_squared);

    print_smile(); print_smile(); print_smile();
    printf("\n");
    print_smile(); print_smile();
    printf("\n");
    print_smile();
    printf("\n");
    printf("starting now:\n");
    one_three();
    printf("\n");
    printf("done!\n");
    return 0;

}

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}

void br(void)
{
    printf("Brazil,Russia");
}

void ic(void)
{
    printf("India,China\n");
}

void print_smile(void)
{
    printf("Smile!");
}

void one_three(void)
{
    printf("one");
    printf("\n");
    two();
    printf("\n");
    printf("three");

}

void two(void)
{
    printf("two");
}
