#include <stdio.h>

int main() {
    int rows = 4; // 定义图案的行数
    int cols = 8; // 定义每行的字符数（在这个例子中，每行都是8个`$`）

    // 外层循环控制行数
    for (int i = 0; i < rows; i++) {
        // 内层循环控制每行的字符数
        for (int j = 0; j < cols; j++) {
            printf("$"); // 打印`$`字符
        }
        printf("\n"); // 每打印完一行后换行
    }

    return 0;
}