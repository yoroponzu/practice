#include <stdio.h>

int main(void){
    int number;
    int sum = 0;
    printf("整数を入力してください\n");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++){
        sum = sum + i;
    }

    printf("合計は%dです\n" ,sum);

    return 0;
}