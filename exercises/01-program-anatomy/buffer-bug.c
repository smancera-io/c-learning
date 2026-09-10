/* Declarating external functions to use (libraries) */
#include <stdio.h>
#include <stdlib.h>

/* Entry point to indicate where the program starts */
int main () {
    /* Initialize variables */
    int num;
    char answer;
    /* Ask for a random number */
    printf("Please enter a random number: ");
    /* Save the input value in the num variable */
    scanf("%d", &num);
    /* Solution to delete buffer bug */
    while (getchar() != '\n');
    /* Ask for another value to experience buffer '\n' bug and skip input */
    printf("Do you want to confirm your input? [Y/N]: ");
    /* Normal instruction to read normal value */
    scanf("%c", &answer);
    /* Use 'stdlib.h' to use descriptive messages */
    return EXIT_SUCCESS;
}