#include <stdio.h>

int main(void){
    int number[3];
    int max = 0;

    printf("整数を入力してください\n");
    for(int i = 0; i < 3; i++){
        scanf("%d", &number[i]);
        if(max < number[i]){
            max = number[i];
        }
    }
    printf("最大値は%dです\n" ,max);

    return 0;
}