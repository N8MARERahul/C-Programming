//2. Write a C program to display the N terms of odd numbers and their sum.
#include <stdio.h>
#include <math.h>

int main() {
    int i, num, sum = 0;
    printf("Enter the nth term: ");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++) {
        if (i % 2 != 0) {
            printf("%d + ", i);
            sum += i;
        }
    }
    printf("\b\b");
    printf("= %d", sum);
    return 0;
}
