/* Declarating external functions to use (libraries) */
#include <stdio.h>
#include <stdlib.h>

/* Entry point to indicate where the program starts */
int main () {
    /* Declarate varaible to read input */
    int num;
    /* Ask for a random number */
    printf("Enter a random number: ");
    /* Save the scanf return value and assig value to num */
    int return_value = scanf("%d", &num);
    /* Print scanf return value to distinguish situations with exit success or exit failure in reading process*/
    printf("The return value is %d after reading the %d number", return_value, num);
    return EXIT_SUCCESS;
}