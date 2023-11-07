//5. Write a C program to check whether a number is Palindrome or not.
#include <stdio.h>
#include <math.h>

int main() {
    int num, sum = 0, p, n;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    n = num;
    
    while (n > 0) {
        p = n % 10;
        sum = sum * 10 + p;
        n /= 10;
    }
    if (sum == num)
    printf("%d is a Palindrome number.", num);
    else
    printf("%d is not a Palindrome number.", num);
    return 0;
}
