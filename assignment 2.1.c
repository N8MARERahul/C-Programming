// 1. Write a C program to display the cube of the number upto N.
#include <stdio.h>
#include <math.h>

int main() {
    int i, num, cube;
    printf("Enter the nth number: ");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++) {
        cube = pow(i, 3);
        printf("Cube of %d is = %d\n", i, cube);
    }
    return 0;
}
