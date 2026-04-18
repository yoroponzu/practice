#include <stdio.h>

int main(void){
    int n;
    int sum = 0;
    int max = 0;

    printf("行列のサイズを入力してください\n");
    scanf("%d" ,&n);

    int number[n][n];

    printf("行列を入力してください\n");

    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
        scanf("%d" ,&number[i][j]);
        if(i == j){
            sum = sum + number[i][j];
         }
        }
    }

    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
        if(max < number[i][j]){
            max = number[i][j];
        }
       }
    }

    printf("対角成分の和: %d\n" ,sum);
    printf("最大値: %d\n" ,max);
    
    return 0;
}