#include <stdio.h>

int main(void) {
    int fixedModulo = 0; // 初始化固定求模的数
    printf("请输入求模运算的第二个固定整数: ");
    scanf("%d", &fixedModulo);

    printf("\n现在可以开始输入第一个整数进行求模运算。输入非正数以结束程序。\n");

    while (1) { // 使用无限循环
        int inputNumber = 0;
        printf("请输入一个整数: ");
        scanf("%d", &inputNumber);

        if (inputNumber <= 0) {
            printf("程序结束。\n");
            break;
        }

        if (fixedModulo == 0) {
            printf("警告: 求模运算中的除数不能为零。程序将退出。\n");
            return 1;
        }

        int result = inputNumber % fixedModulo;
        printf("结果: %d %% %d = %d\n", inputNumber, fixedModulo, result);
    }

    return 0;
}
