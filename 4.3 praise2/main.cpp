#define _CRT_SECURE_NO_WARNINGS 1
/* praise2.c */
// 如果编译器不识别%zd，尝试换成%u或%lu。
#include <stdio.h>
#include <string.h>      /* 提供strlen()函数的原型 */
#define PRAISE "You are an extraordinary being."
int main(void)
{
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n",
        strlen(name), sizeof name);
    printf("The phrase of praise has %zd letters ",
        strlen(PRAISE));
    printf("and occupies %zd memory cells.\n", sizeof PRAISE);
    //%s是字符串格式化操作符，%zd是size_t类型的整数格式化操作符（带符号的整数类型变量）
    return 0;
}//string.h头文件包含多个与字符串相关的函数原型，包括strlen()