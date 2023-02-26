#include <stdio.h>
#include <stdbool.h>


int main (void) {

    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';

    enum gender {male, female};
    enum gender myGender;

    myGender = male;
    bool boolVar = 0;

    float x = 3.99999432424;

    printf("integerVar = %i\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);
    printf("%.5f\n", x); 
    printf("boolVar = %i\n", boolVar);
    
    return 0;
}