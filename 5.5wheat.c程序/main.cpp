#include <stdio.h>
//指数增长
#define SQUARES 64  //棋盘中的方格数
int main(void) {
    const double CROP = 2E16;//世界小麦年产谷物
    double current, total;
    int count =1;
    printf("square    grains      total");
    printf("         fraction of \n");
    printf("          added      grains");
    printf("         world total\n");
    total = current = 1.0;//从第一颗谷粒开始
    printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/CROP);

    while(count<SQUARES) {
          count = count+1;
          current = 2.0*current;//下一个方格谷粒翻倍
          total = total+current;//更新总数
          printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/CROP);
    }
    printf("That's all.\n");

    return 0;

}

