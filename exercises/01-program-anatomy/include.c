/* Declarating external functions to use (libraries) */
#include "library.h" /* We use quotation marks to indicate an own library in our folder */
#include "library.h"
#include <stdio.h>   /* We use angle brackets to indicate it is a system library */
#include <stdlib.h>

/* Entry point to indicate where the program starts */
int main () {
    /* Initialize variables*/
    int a, b;
    /* Ask user for two numbers */
    printf("Please enter two numbers separated by a space: ");
    /* Read and save the values */
    scanf("%d %d", &a, &b);
    /* Call our own function from 'library.h' and save its result*/
    int result = sum(a, b);
    /* Print with standard output the final result */
    printf("The result is %d", result);
    /* Use 'stdlib.h' to use descriptive messages */
    return EXIT_SUCCESS;
}