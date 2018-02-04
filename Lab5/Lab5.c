#include <stdio.h>

int choose (int n, int r);
int factorial (int n);


int main(int argc, char **argv){
	int rows;
	printf("Enter the number of rows: \n");
	scanf("%d", rows);
	
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
