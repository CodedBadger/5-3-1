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



void block_builder(int training_lifts[], int weight_inc, int num_blocks){
  int i, x;
  x=num_blocks;
  char lift_name[4][12] = {"Squat", "Bench", "Deadlift", "Strict press"};
  char days[4][9] = { "MONDAY", "TUESDAY", "WEDNESDAY" , "THURSDAY" };
  printf("### Week 1 ###");
  for(int i=0;i < num_blocks;i++){
     printf(" %s\n %s 1x5 @ %d\n %s 1x5 @ %d\n %s 1x5+ @ %d\n", days[i], lift_name[i], training_lifts[i]*75/100,lift_name[i],training_lifts[i]*80/100,lift_name[i],training_lifts[i]*85/100);
  }
}
 //printf(" ### Week 1 ###\n MONDAY\n Squat 1x5 @ %d\n Squat 1x5 @ %d\n Squat 1x5+ @ %d\n", training_lifts[0]*75/100,training_lifts[0]*80/100,training_lifts[0]*85/100); 
 //printf(" WEDNESDAY\n Bench 1x5 @ %d\n Bench 1x5 @ %d\n Bench 1x5+ @ %d\n", training_lifts[1]*75/100,training_lifts[1]*80/100,training_lifts[1]*85/100); 
 //printf(" FRIDAY\n Deadlift 1x5 @ %d\n Deadlift 1x5 @ %d\n Deadlift 1x5+ @ %d\n", training_lifts[2]*75/100,training_lifts[2]*80/100,training_lifts[2]*85/100); 
 //printf(" SUNDAY\n Strict Press 1x5 @ %d\n Strict Press 1x5 @ %d\n Strict Press 1x5+ @ %d\n", training_lifts[3]*75/100,training_lifts[3]*80/100,training_lifts[3]*85/100); 
//}


int main(){
  int max_squat, max_bench, max_deadlift, max_strict_press, trn_percentage, weight_inc, num_blocks;
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
  printf("How many blocks do you want to complete?\n");
  scanf("%d", &num_blocks);
  printf("What do you want the wieght increases to be block by block?");
  scanf("%d", &weight_inc);


  training_maxes(max_squat, max_bench,max_deadlift, max_strict_press, training_lifts);
  block_builder(training_lifts,weight_inc,num_blocks);
  return 0;
}
