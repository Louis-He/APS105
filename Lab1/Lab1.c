#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
    double no1; double no2; double no3;
	printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &no1, &no2, &no3);
    //printf("%.2lf %.2lf %.2lf\n", no1, no2, no3);
    double avg = (no1 + no2 + no3) / 3;//Find the average of 3 numbers
    double deviation = sqrt(((no1-avg) * (no1-avg) + (no2-avg) * (no2-avg) + (no3-avg) * (no3-avg)) / 2);//Find the deviation of 3 numbers
    printf("The mean is %.2lf and the standard deviation is %.2lf\n", avg, deviation);
	return 0;
}
