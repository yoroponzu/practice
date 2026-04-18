#include <stdio.h>

int main(void){
    int number[5];

    printf("整数を入力してください\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &number[i]);      
    }

    int max = number[0];
    int min = number[0];

    for(int i = 0; i < 5; i++){
        if(max < number[i]){
            max = number[i];
        }

        if(min > number[i]){
            min = number[i];
        }
    }
    
    printf("最大値は%dです:\n" ,max);
    printf("最小値は%dです:\n" ,min);
    
    return 0;
}
