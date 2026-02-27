#include <stdio.h>
#include <math.h>


int block_builder(int max_squat, int max_deadlift, int max_bench){
 printf("Max Squat: %d\n Max Deadlift: %d\n Max Bench %d\n", max_squat, max_bench, max_deadlift);
}

int main(){

  int max_squat, max_bench, max_deadlift, max_strict_press, num_blocks, weight_incs;
  printf("Please enter your max squat\n");
  scanf("%d", &max_squat);
  printf("Please enter your max bench\n");
  scanf("%d", &max_bench);
  printf("Please enter your max deadlift\n");
  scanf("%d", &max_deadlift);
  printf("Please enter your max strict press\n");
  scanf("%d", &max_strict_press);
  printf("How many blocks do you want to complete?\n");
  scanf("%d", &num_blocks);
  //probably weight increse
  //training style, DUP, Standard etc
  block_builder(max_squat, max_bench, max_deadlift);
  
}
