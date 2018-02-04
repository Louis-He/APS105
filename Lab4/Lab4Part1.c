#include <stdio.h>

int main(int argc, char **argv)
{
	int rows; int row = 0; int col = 0;

	//scan the input
	printf("Enter the number of rows in the triangle: \n");
	scanf("%d", &rows);

	// output triangle
	for(row = 1; row <= rows; row++){
		for(col = 1; col <= 2 * rows - 1; col++){
			// output the "^" sign
			if (row == rows){
				printf("^");
			} else if (col == rows - row + 1){
				printf("^");
			} else if (col == rows + row - 1){
				printf("^");
			} else {
				printf(" ");
			}

			// output the enter
			if (col == 2 * rows - 1){
				printf("\n");
			}
		}
	}
	return 0;
}