#include <stdio.h>

int main(void){
	char str[50];
	char word;
	int i = 0;
	int count = 0;

	printf("文字列:");
	scanf("%s" , str);
	printf("\n");

	printf("調べる文字:");
	scanf("%*c%c" , &word);
	printf("\n");

	while(str[i] != '\0'){
		if(str[i] == word){
			count++;
		}
		i++;
	}

	printf("出現回数: %d\n" , count);

	return 0;
}