#include <stdio.h>

int main(int agrc, char *argv[]) {

    double width = atoi(argv[1]); // atoi is used to convert the argv value to double
    double height = atoi(argv[2]);
    double perimeter;
    double area;

    // width = 5;
    // height = 7;
    perimeter = (width + height) * 2;
    area = width * height;

    printf("Values are:\n width = %g\n height = %g\n perimeter = %g\n area = %g\n", width, height, perimeter, area);

    return 0;
}