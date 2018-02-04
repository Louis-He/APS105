#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv){
	while (true){
		int inputCents;
		int quarter, dime, nickel, cent; // 25, 10, 5, 1 cent(s)
		int reminder;
		bool comaflag = false; // whether a coma is needed

		// scan the input value
		printf("Please give an amount in cents less than 100: ");
		scanf("%d", &inputCents);

		// check invalid input
		if (inputCents > 99 || inputCents < 1){
            printf("Goodbye\n");
			return 0;
		}

		// decide quarter
		quarter = inputCents / 25;
		reminder = inputCents - quarter * 25;

		// decide dime
		dime = reminder / 10;
		reminder = reminder - dime * 10;

		// decide nickel
		nickel = reminder / 5;
		reminder = reminder - nickel * 5;

		// decide cent
		cent = reminder;

		printf("%d cents: ", inputCents); // print total cents
		// print quarter
		if (quarter == 1){
			printf("1 quarter");
			comaflag = true;
		}else if (quarter > 1){
			printf("%d quarters", quarter);
			comaflag = true;
		}

		// print dime
		if (dime == 1){
			if (comaflag){
				printf(", ");
			}
			printf("1 dime");
			comaflag = true;
		}else if (dime > 1){
			if (comaflag){
				printf(", ");
			}
			printf("%d dimes", dime);
			comaflag = true;
		}

		// print nickel
		if (nickel == 1){
			if (comaflag){
				printf(", ");
			}
			printf("1 nickel");
			comaflag = true;
		}else if (nickel > 1){
			if (comaflag){
				printf(", ");
			}
			printf("%d nickels", nickel);
			comaflag = true;
		}

		// print cent
		if (cent == 1){
			if (comaflag){
				printf(", ");
			}
			printf("1 cent");
			comaflag = true;
		}else if (cent > 1){
			if (comaflag){
				printf(", ");
			}
			printf("%d cents", cent);
			comaflag = true;
		}

		printf(".\n");
  }
	return 0;
}
