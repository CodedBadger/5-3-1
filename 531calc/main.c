#include <stdio.h>
#include <math.h>

int main(){
  int max_squat, max_bench, max_deadlift, max_strict_press, training_squat, training_bench, training_deadlift, training_strict_press;
  
  printf("please enter your max squat\n");
  scanf("%d", &max_squat);
  printf("please enter your max bench\n");
  scanf("%d", &max_bench);
  printf("please enter your max deadlift\n");
  scanf("%d", &max_deadlift);
  printf("please enter your max strict press\n");
  scanf("%d", &max_strict_press);
  
  training_squat=max_squat*0.9;
  training_bench=max_bench*0.9;
  training_deadlift=max_deadlift*0.9;
  training_strict_press=max_strict_press*0.9;
  printf("Training squat: %d, Training bench: %d, Training deadlift: %d, Trainingstrict press: %d \n", training_squat, training_bench, training_deadlift, training_strict_press);
  
  printf("### BLOCK 1 #### \nWeek 1 \n Monday\n Squat:\n 1x5@ %d,\n 1x5@ %d,\n 1x5+ @%d\n", (int) (training_squat*0.65),(int)(training_squat*0.75),(int)(training_squat*0.85));

}

