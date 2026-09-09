/* Declarating external functions to use (libraries) */
#include <stdio.h>

/* Entry point to indicate where the program starts */
int main () {
    /* Initialize variable */
    float grade;
    /* Ask for a grade */
    printf("Enter your latest grade: ");
    /* Save input value in its determined space */
    scanf("%f", &grade);
    /* Print with two different formats the same float grade */
    printf("Default format: %f\n", grade);
    printf("Personalized format: %.2f\n", grade);
    /* Assign a return program value and check it in console */
    return 7;
}