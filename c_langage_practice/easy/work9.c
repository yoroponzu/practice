#include <stdio.h>
 
int main(void) {
  int x = 10; // int型変数
  int *p; // 変数xへのポインタを用意
  p = &x; // ポインタ変数pに変数xのアドレスを代入  
  printf("変数xへのポインタpのアドレス：%p\n", p);
 
  return 0;
}