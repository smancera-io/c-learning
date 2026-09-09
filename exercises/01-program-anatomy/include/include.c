#include "library.h"
#include "library.h"
#include <stdio.h>

int main () {
    int a, b;
    printf("Please enter two numbers separated by a space: ");
    scanf("%d %d", &a, &b);
    int result = sum(a, b);
    printf("The result is %d", result);
}