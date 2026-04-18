#include <stdio.h>

int main(void){
    int count;
    int sum = 0;
    double ave;
    int max = 0;
    int cnt = 0;

    printf("データ数を入力してください\n");
    scanf("%d" ,&count);

    int number[count];
    printf("%d個の整数を入力してください\n" ,count);
    
    for(int i = 0; i < count; i++){
        scanf("%d" ,&number[i]);
        if(max < number[i]){
            max = number[i];
        }
        sum = sum + number[i];
    }
    ave = (double)sum / count;

    for(int i = 0; i < count; i++){
        if(ave >= number[i]){
            cnt++;
        }
    }

    printf("平均: %.1f\n" ,ave);
    printf("最大値: %d\n" ,max);
    printf("平均以上の個数: %d\n" ,cnt);

    return 0;
}