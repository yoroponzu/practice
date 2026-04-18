#include <stdio.h>

int main(void){
    int i = 0;
    int count = 0;
    char str[20];
    
    printf("文字列を入力してください\n");
    scanf("%s", str);
    
    while (str[i] != '\0'){
       if(str[i] == 'a'|| str[i] == 'i' || str[i] =='u' || str[i] == 'e' || str[i] == 'o'){
        count++;
       }
       i++;
    }

    printf("母音の数は%dです\n" ,count);
    
    return 0;
}
