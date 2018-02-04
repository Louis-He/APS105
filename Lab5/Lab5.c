#include <stdio.h>
#include <stdbool.h>

int choose (int n, int r);
int factorial (int n);


int main(int argc, char **argv){
	int rows; int row = 0; int space = 0;int col = 0;
    
    while(true){
        printf("Enter the number of rows: ");
        scanf("%d", &rows);

        if ( rows < 0){
            return 0;
        }

        for(row = 0;row < rows; row++){
            // output space before the first characters
            for(space = 0; space <= rows - row - 2; space ++){
                printf("   ");
            }

            // output number
            for(col = 0; col <= row; col++){
                printf("%-6d", choose (row, col));
                if (col == row) {
                    printf("\n");
                }
            }

        }
    }
	return 0;
}

int choose (int n, int r){
	return factorial(n) / (factorial(r) * factorial(n-r));
}

int factorial (int n){
	int factorial = 1;
	while(n > 0){
		factorial *= n;
		n--;
	}

	return factorial;
}
