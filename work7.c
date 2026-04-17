#include <stdio.h>

int main(void){
    int i = 0;
    char str[20];
    
    printf("文字列を入力してください\n");
    scanf("%s", str);
    
    while (str[i] != '\0'){
       i++;
    }

    printf("文字数は%dです\n" ,i);
    
    return 0;
}
