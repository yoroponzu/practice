#include <stdio.h>
#include <string.h>

int main(void){
	char str[50];
	int i = 0;
	char temp;

	printf("文字列:");
	scanf("%s" , str);
	printf("\n");

	int j = strlen(str);

	printf("逆順: ");
    for (i = j - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

	return 0;
}