#include <stdio.h>
 
struct student{
    int score;
    char name[50];
};

int main(void){
    struct student s[3];
    int i;
    int max = 0;

    printf("3人の学生の名前と点数を入力してください:\n\n");

    for (i = 0; i < 3; i++) {
        printf("%d人目: ", i + 1);
        scanf("%s %d", s[i].name, &s[i].score);
    }

    for (i = 1; i < 3; i++) {
        if (s[i].score > s[max].score) {
            max = i;
        }
    }

    printf("\n最高点の学生:\n");
    printf("名前: %s\n", s[max].name);
    printf("点数: %d\n", s[max].score);

    return 0;
    
}
