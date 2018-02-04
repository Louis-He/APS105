#include <stdio.h>

int choose (int n, int r);
int factorial (int n);


int main(int argc, char **argv){
	int rows; int row = 0; int space = 0;
	printf("Enter the number of rows: \n");
	scanf("%d", rows);

	for(row = 0;row <= rows; row++){
		// output space before the first characters 
		for(space = 0; space <= rows - row - 2; space ++){
			printf("   ");
		}
		
		// output number



	}

	return 0;
}

int choose (int n, int r){
	return factorial(n) / (factorial(r) * factorial(n-r));
}

int factorial (int n){
	int factorial = 1;
	while(n > 0){
		result *= n;
		n--;
	}

	return factorial;
}
