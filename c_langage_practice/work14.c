#include <stdio.h>
 
struct student{
    int score;
    char name[50];
};

int main(void){
    struct student s[3];
    int i;
    int sum = 0;
    double ave;

    printf("3人の学生の名前と点数を入力してください:\n");

    for (i = 0; i < 3; i++) {
        printf("%d人目: ", i + 1);
        scanf("%s %d", s[i].name, &s[i].score);
    }

    for (i = 0; i < 3; i++) {
        sum = sum + s[i].score; 
    }

    ave = (double)sum / i;

    
    printf("平均点: %.1f\n", ave);

    return 0;
    
}
