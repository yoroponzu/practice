#include <stdio.h>

void swap(int *num1, int *num2){
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(void){
    int a, b;
    printf("整数を2つ入力してください\n");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("入れ替え後 %d %d\n" ,a, b);

    return 0;
}