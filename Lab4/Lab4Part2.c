#include <stdio.h>
#include <math.h>

// declare functions
int convertDecimalToBinary(int decimal);
int convertBinaryToDecimal(int binary);

int main(int argc, char **argv)
{
	char conversionType; int number;

	// scan the input
	printf("Enter B for conversion of Binary to Decimal, OR\n");
	printf("Enter D for conversion of Decimal to Binary: ");
	scanf("%c", &conversionType);

	// check for invalid input
	if (conversionType != 'B' && conversionType != 'D'){
		printf("Enter your number: Invalid input; Goodbye\n");
		return 0;
	}

	// If the input is correct
	printf("Enter your number: ");
	scanf("%d", &number);
	// decide which function to use
	if (conversionType == 'B'){
		printf("%d in binary = %d in decimal\n", number, convertBinaryToDecimal(number));
	}else if (conversionType == 'D'){
		printf("%d in decimal = %d in binary\n", number, convertDecimalToBinary(number));
	}
	return 0;
}

int convertDecimalToBinary(int decimal){
	int position = 0; int binary = 0; int residual = decimal;

	// Decide the length of Binary
	while(pow(2, position) <= decimal){
		position++;
	}

	// decide binary output
	while(residual > 0){
		if (pow(2, position - 1) <= residual){
			binary += pow(10, position - 1);
			residual = residual - pow(2, position - 1);
			position --;
		}else{
			position --;
		}
	}

	return binary;
}

int convertBinaryToDecimal(int binary){
	int position = 0; int decimal = 0; int residual = binary;

	// Decide the length of Binary
	while(pow(10, position) <= binary){
		position++;
	}

	// decide binary output
	while(residual > 0){
		if (pow(10, position - 1) <= residual){
			decimal += pow(2, position - 1);
			residual = residual - pow(10, position - 1);
			position --;
		}else{
			position --;
		}
	}

	return decimal;
}
