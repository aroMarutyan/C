#include <stdio.h>

int main(int argc, char *argv[]) {

    int numOfArgs = argc;
    char *arg1 = argv[0];
    char *arg2 = argv[1];

    printf("Num of args: %d\n", numOfArgs);
    printf("Arg 1 is the program name: %s\n", arg1);
    printf("Arg 2 is the CLI arg: %s\n", arg2);

    return 0;
}