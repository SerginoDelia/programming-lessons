#include <stdio.h>

int main() {

  int temp;
  printf("What is the temperature? ");
  scanf("%d", &temp);

  if (temp >= 70) {
    printf("damn bro, its hot\n");
  } else if (temp >= 30 && temp < 70) {
    printf("damn bro, its mild\n");
  } else {
    printf("damn bro, its cold\n");
  }

  return 0;

}
