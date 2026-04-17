#include <stdio.h>

int main(void){
    int number[4];
    int sum = 0;
    int ave;
    int i;

    printf("整数を入力してください\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &number[i]);
        sum = sum + number[i];
    }
    ave = sum / i;
    printf("平均は%dです:\n" ,ave);
    
    return 0;
}
