#include <stdio.h>

int main(void){
    int number;
    printf("整数を入力してください\n");
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("%dは偶数です\n" ,number);
    } else{
        printf("%dは奇数です\n" ,number);
    }

    return 0;
}