#include <stdio.h>

int main(void){
    int number[5];
    int sum = 0;
    int *p = &number[0];

    printf("5つの整数を入力してください\n");
    for(int i = 0; i < 5; i++){
         scanf("%d" ,&number[i]);
         sum = sum + *(p + i);
    }

    printf("合計は%dです\n" ,sum);

    return 0;
}