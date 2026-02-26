#include <stdio.h>

int main(){
  int i;
  int x;
  i=1;
  printf("Please enter a number for x\n");
  scanf("%d", &x);
  while (i <= x) {
    printf("Output%d \n", i);
    i++;
  }

   
}
