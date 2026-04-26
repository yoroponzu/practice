#include <stdio.h>
#include <string.h>

int main(void){
	char str[50];
	int i = 0;
	int true = 0;

	printf("文字列:");
	scanf("%s" , str);
	printf("\n");


	for(int i = 0; i < strlen(str) / 2; i++){
        if(str[i] == str[strlen(str) - 1 - i]){
			true = 1;
			break;
		}
    }

	if(true == 1){
		printf("回文です\n");
	}else{
		printf("回文ではありません\n");
	}

	return 0;
}