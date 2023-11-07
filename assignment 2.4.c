//4. Write a C program to check whether a number is Armstrong number or not.
#include <stdio.h>
#include <math.h>

int main() {
    int num, digit, sum = 0, p, n;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    digit = log10(num) + 1;
    n = num;
    
    while (n > 0) {
        p = n % 10;
        sum = sum + pow(p, digit);;
        n /= 10;
    }
    if (sum == num)
    printf("%d is an Armstrong number.", num);
    else
    printf("%d is not an Armstrong number.", num);
    return 0;
}
