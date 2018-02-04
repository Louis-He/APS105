#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv){
	double input1, input2;
	char operation;
	int count = 1; // record running times

    // scan two variables and operation
    //printf("__________Run %d________\n", count);
    printf("Enter first number: ");
    scanf("%lf", &input1);
    printf("Enter second number: ");
    scanf("%lf", &input2);
    printf("Enter calculation command (one of a, s, m, or d): ");
    scanf(" %c", &operation);

    if (operation == 'a'){
        printf("Sum of %.2f and %.2f is %.2f\n", input1, input2, input1 + input2);
    }else if (operation == 's'){
        printf("Difference of %.2f from %.2f is %.2f\n", input1, input2, input1 - input2);
    }else if (operation == 'm'){
        printf("Product of %.2f and %.2f is %.2f\n", input1, input2, input1 * input2);
    }else if (operation == 'd'){
        // check the division by 0
        if (input2 == 0){
            printf("Error, trying to divide by zero\n");
        } else {
            printf("Division of %.2f by %.2f is %.2f\n", input1, input2, input1 / input2);
        }
    }else{
        printf("Error, unknown calculation command given\n");
        return 0;
    }

}
