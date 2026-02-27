#include <stdio.h>

void input_getter(int *max_squat, int *max_bench, int *max_deadlift, int *max_strict_press, int *num_blocks) {

    printf("Please enter your max squat\n");
    scanf("%d", max_squat);

    printf("Please enter your max bench\n");
    scanf("%d", max_bench);

    printf("Please enter your max deadlift\n");
    scanf("%d", max_deadlift);

    printf("Please enter your max strict press\n");
    scanf("%d", max_strict_press);

    printf("How many blocks do you want to complete?\n");
    scanf("%d", num_blocks);
}

void block_builder(int max_squat, int max_bench, int max_deadlift) {
    printf("Max Squat: %d\n", max_squat);
    printf("Max Bench: %d\n", max_bench);
    printf("Max Deadlift: %d\n", max_deadlift);
}

int main() {

    int max_squat, max_bench, max_deadlift, max_strict_press, num_blocks;

    input_getter(&max_squat, &max_bench, &max_deadlift, &max_strict_press, &num_blocks);

    block_builder(max_squat, max_bench, max_deadlift);

    return 0;
}
