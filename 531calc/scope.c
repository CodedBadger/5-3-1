#include <stdio.h>
#include <math.h>

void workout_calc(int max_squat){
  int training_max;
  training_max=max_squat*90/100;
  printf("training squat: %d\n", training_max);
}

int main(){
  int max_squat=505;
  workout_calc(max_squat);
  return 0;
}
