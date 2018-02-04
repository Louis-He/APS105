#include <stdio.h>

int main(int argc, char **argv)
{
    char band1;char band2; char multiBand; char toleranceBand;
    double tens; double digit;
    double resistence;
    double multiplierTimes; char *multiplierUnit; double tolerancePercent;
    //char *firstBandName = "";char *secondBandName = "";char *thirdBandName = "";char *fourthBandName = "";

    // scan four input
    printf("Please enter the 1st band:\n");
    scanf(" %c", &band1);
    printf("Please enter the 2nd band:\n");
    scanf(" %c", &band2);
    printf("Please enter the multiplier band:\n");
    scanf(" %c", &multiBand);
    printf("Please enter the tolerance band:\n");
    scanf(" %c", &toleranceBand);

    printf("Resistor bands: ");
    // decide tenth digit
    if(band1 == 'K' || band1 == 'k'){
        tens = 0; printf("Black ");
    }else if(band1 == 'B' || band1 == 'b'){
        tens = 1; printf("Brown ");
    }else if(band1 == 'R' || band1 == 'r'){
        tens = 2; printf("Red");
    }else if(band1 == 'O' || band1 == 'o'){
        tens = 3; printf("Orange ");
    }else if(band1 == 'E' || band1 == 'e'){
        tens = 4; printf("Yellow ");
    }else if(band1 == 'G' || band1 == 'g'){
        tens = 5; printf("Green ");
    }else if(band1 == 'U' || band1 == 'u'){
        tens = 6; printf("Blue ");
    }else if(band1 == 'V' || band1 == 'v'){
        tens = 7; printf("Violet ");
    }else if(band1 == 'Y' || band1 == 'y'){
        tens = 8; printf("Grey ");
    }else if(band1 == 'W' || band1 == 'w'){
        tens = 9; printf("White ");
    }

    // decide digit
    if(band2 == 'K' || band2 == 'k'){
        digit = 0; printf("Black ");
    }else if(band2 == 'B' || band2 == 'b'){
        digit = 1; printf("Brown ");
    }else if(band2 == 'R' || band2 == 'r'){
        digit = 2; printf("Red ");
    }else if(band2 == 'O' || band2 == 'o'){
        digit = 3; printf("Orange ");
    }else if(band2 == 'E' || band2 == 'e'){
        digit = 4; printf("Yellow ");
    }else if(band2 == 'G' || band2 == 'g'){
        digit = 5; printf("Green ");
    }else if(band2 == 'U' || band2 == 'u'){
        digit = 6; printf("Blue ");
    }else if(band2 == 'V' || band2 == 'v'){
        digit = 7; printf("Violet ");
    }else if(band2 == 'Y' || band2 == 'y'){
        digit = 8; printf("Grey ");
    }else if(band2 == 'W' || band2 == 'w'){
        digit = 9; printf("White ");
    }

    // decide multiplierTimes and multiplierUnit
    if(multiBand == 'K' || multiBand == 'k'){
        multiplierTimes = 1; multiplierUnit = ""; printf("Black ");
    }else if(multiBand == 'B' || multiBand == 'b'){
        multiplierTimes = 10; multiplierUnit = ""; printf("Brown ");
    }else if(multiBand == 'R' || multiBand == 'r'){
        multiplierTimes = 100; multiplierUnit = ""; printf("Red ");
    }else if(multiBand == 'O' || multiBand == 'o'){
        multiplierTimes = 1; multiplierUnit = "K"; printf("Orange ");
    }else if(multiBand == 'E' || multiBand == 'e'){
        multiplierTimes = 10; multiplierUnit = "K"; printf("Yellow ");
    }else if(multiBand == 'G' || multiBand == 'g'){
        multiplierTimes = 100; multiplierUnit = "K"; printf("Green ");
    }else if(multiBand == 'U' || multiBand == 'u'){
        multiplierTimes = 1; multiplierUnit = "M"; printf("Blue ");
    }else if(multiBand == 'V' || multiBand == 'v'){
        multiplierTimes = 10; multiplierUnit = "M"; printf("Violet ");
    }else if(multiBand == 'L' || multiBand == 'l'){
        multiplierTimes = 0.1; multiplierUnit = ""; printf("Gold ");
    }else if(multiBand == 'S' || multiBand == 's'){
        multiplierTimes = 0.01; multiplierUnit = ""; printf("Silver ");
    }

    // decide tolerance
    if(toleranceBand == 'B' || toleranceBand == 'b'){
        tolerancePercent = 1; printf("Brown\n");
    }else if(toleranceBand == 'R' || toleranceBand == 'r'){
        tolerancePercent = 2;printf("Red\n");
    }else if(toleranceBand == 'G' || toleranceBand == 'g'){
        tolerancePercent = 0.5; printf("Green\n");
    }else if(toleranceBand == 'U' || toleranceBand == 'u'){
        tolerancePercent = 0.25; printf("Blue\n");
    }else if(toleranceBand == 'V' || toleranceBand == 'v'){
        tolerancePercent = 0.10; printf("Violet\n");
    }else if(toleranceBand == 'Y' || toleranceBand == 'y'){
        tolerancePercent = 0.05; printf("Grey\n");
    }else if(toleranceBand == 'L' || toleranceBand == 'l'){
        tolerancePercent = 5; printf("Gold\n");
    }else if(toleranceBand == 'S' || toleranceBand == 's'){
        tolerancePercent = 10; printf("Silver\n");
    }

    resistence = (10 * tens + digit) * multiplierTimes;

    if (resistence > 1000) {
        if (multiplierUnit == "") {
            resistence = resistence / 1000;
            multiplierUnit = "K";
        }else if (multiplierUnit == "K") {
            resistence = resistence / 1000;
            multiplierUnit = "M";
        }
    }

    // print first line
    //printf("Resistor bands: %s %s %s %s\n", firstBandName, secondBandName, thirdBandName, fourthBandName);
    // print second line
    if (multiplierUnit == ""){
        printf("Resistance: %.2lf Ohms +/- %.2f%%\n", resistence, tolerancePercent);
    } else {
        printf("Resistance: %.2lf %sOhms +/- %.2f%%\n", resistence, multiplierUnit, tolerancePercent);
    }

	return 0;
}
