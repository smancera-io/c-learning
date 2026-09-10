/* Declarating external functions to use (libraries) */
#include <stdio.h>
#include <stdlib.h>

/* Entry point to indicate where the program starts */
int main () {
    /* Initialize variables */
    int num = 15;
    char topic [20] = "programming";
    /* Standard output with a mistake between the argument and its format specifier to provoke undefined behavior */
    printf("Today %s is the topic we are going to work with", num);
    /* Use 'stdlib.h' to use descriptive messages */
    return EXIT_SUCCESS;
}