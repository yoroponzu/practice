#include <stdio.h>

int add(int num1, int num2){
    return num1 + num2;
}

int sub(int num1, int num2){
    return num1 - num2;
}

int mul(int num1, int num2){
    return num1 *num2;
}

int div(int num1, int num2){
    return num1 / num2;
}

int main(void){
    int choice;
    int num1, num2;

    while(1){
        int result = 0;
        printf("\n\n--- 電卓 ---\n\n");
        printf("1: +\n");
        printf("2: -\n");
        printf("3: *\n");
        printf("4: /\n");
        printf("0: 終了\n");
        printf("選択\n");
        scanf("%d" ,&choice);
        printf("選択: %d\n" ,choice);

        if (choice == 0) {
            printf("終了します\n");
            break;
        }

        if (choice < 0 || choice > 4) {
            printf("無効な入力です\n");
            continue;
        }

        printf("2つの数値を入力\n");
        scanf("%d %d", &num1, &num2);

        switch(choice){
            case 1:
                result = add(num1, num2);
            break;

            case 2:
                result = sub(num1, num2);
            break;

            case 3:
                result = mul(num1, num2);
            break;

            case 4:
                if(num2 != 0){
                    result = div(num1, num2);
                } else{
                    printf("0では割れません\n");
                    continue;
                }
            break;
        }

        printf("結果: %d", result);
    }

}