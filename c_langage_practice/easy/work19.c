#include <stdio.h>

int main(void){
	char str[50];
	int i = 0;

	printf("文字列:");
	scanf("%s" , str);
	printf("\n");

	while(str[i] != '\0'){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = str[i] + 32;
		} else if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] = str[i] - 32;
		}
		i++;
	}

	printf("変換後: %s\n" , str);

	return 0;
}