#include <stdio.h>
#include <math.h>


void training_maxes(int max_squat, int max_bench, int max_deadlift, int max_strict_press, int training_lifts[]){
  //int trn_percentage//, training_squat, training_bench, training_deadlift, training_strict_press;
  int trn_percentage=90;
  int max_lifts[4] = { max_squat, max_bench, max_deadlift, max_strict_press };
  for(int i=0;i < 4;i++){
    training_lifts[i]=(int)(max_lifts[i]*trn_percentage/100);
  }
  printf("training squat: %d\ntraining bench: %d\ntraining deadlift: %d\ntraining strict press: %d\n", training_lifts[0], training_lifts[1], training_lifts[2], training_lifts[3]);
}



void block_builder(int training_lifts[]){
 printf("### Week 1 ###\n Squat 1x5 @ %d\n Squat 1x5 @ %d\n Squat 1x5+ @ %d\n", training_lifts[0]*75/100,training_lifts[0]*80/100,training_lifts[0]*85/100); 
}


int main(){
  int max_squat, max_bench, max_deadlift, max_strict_press, trn_percentage, weight_inc;
  int training_lifts[4];
  printf("Please enter your max squat\n");
  scanf("%d", &max_squat);
  printf("Please enter your max bench\n");
  scanf("%d", &max_bench);
  printf("Please enter your max deadlift\n");
  scanf("%d", &max_deadlift);
  printf("Please enter your max strict press\n");
  scanf("%d", &max_strict_press);
  //printf("Enter a percentage (80-95) to create a training max\n");
  //scanf("%d\n", &trn_percentage);
  //printf("How many blocks do you want to complete?\n");
  //scanf("%d", &num_blocks);


  training_maxes(max_squat, max_bench,max_deadlift, max_strict_press, training_lifts);
  block_builder(training_lifts);
  return 0;
}
