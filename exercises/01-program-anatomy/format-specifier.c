/* Declarating external functions to use (libraries) */
#include <stdio.h>
#include <stdlib.h>

/* Entry point to indicate where the program starts */
int main () {
    /* Initialize variables */
    char name [15];
    int age;
    float grade;
    /* Ask for the values to save using standard output */
    printf("Please enter your name, age and grade separated by a space: ");
    /* Standard input used to read values entered by a user */
    /* Use the variable name of an array allows moving +1, use &name allows moving +sizeOf */
    scanf("%s %d %f", name, &age, &grade); 
    /* Use format specifiers with lenght determined */
    printf("Confirm values registered (%s, %.5d, %.2f)", name, age, grade);
    /* Use 'stdlib.h' to use descriptive messages */
    return EXIT_SUCCESS;
}