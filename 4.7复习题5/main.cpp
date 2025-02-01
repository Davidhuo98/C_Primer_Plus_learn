#include<stdio.h>
int main(void) {
    float download_speed;
    float file_size;
    float time;

    printf("Please enter the speed of file download:\n");
    scanf("%f",&download_speed);

    while (getchar() != '\n'); // 清除可能的输入缓冲区中的换行符

    printf("Please enter the file size:\n");
    scanf("%f",&file_size);

    time = file_size / download_speed;

    printf("At %.2f megabits per second, a file of %.2f megabytes\n",download_speed,file_size);
    printf("Downloads in %.2f seconds.\n",time);

    return 0;



}
