#include <stdio.h>

int main(void){
    int count;
    int tmp;

    printf("データ数を入力してください\n");
    scanf("%d" ,&count);

    int number[count];
    printf("%d個の整数を入力してください\n" ,count);
    
    for(int i = 0; i < count; i++){
        scanf("%d" ,&number[i]);
    }

    for(int i = 0; i < count - 1; i++){
        for(int j = 0; j < count - 1 - i; j++){
            if(number[j] > number[j+1]){
                tmp = number[j];
                number[j] = number[j+1];
                number[j+1] = tmp;
            }
        }
    }

    printf("昇順に並べ替えた結果\n");
    for(int i = 0; i < count; i++){
        printf("%d " ,number[i]);
    }
    printf("\n");

    return 0;

}