#include <stdio.h>
#define end 'g'

int main(void)
{
    char name = 'a';

    // 直接进入循环，从 'a' 开始打印
    while (name <= end) // 使用 <= 来包括 'g'
    {
        printf("%5c", name);
        name = name + 1; // 在打印之后递增
    }

    printf("\n");
    return 0;
}

