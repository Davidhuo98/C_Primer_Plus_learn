#include <stdio.h>

int main(void)
{
    int day;
    int sum = 0;
    int n = 0;

    printf("Please enter the days:\n");
    scanf("%d", &day);

    while (n < day)
    {
        n = n + 1;
        sum = sum + n * n; // 修改这里，将 n 的平方累加到 sum 中
    }

    printf("In %d days, you earn totally: %d\n", day, sum);
    return 0;
}
