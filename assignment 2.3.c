//3. Write a C program to count number of digits in a number.
#include <stdio.h>
#include <math.h>

int main() {
    int i, num, digit = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
//    digit = log10(num) + 1;
	while (num > 0) {
		digit++;
		num /= 10;
	}
    printf("Number of digit = %d", digit);
    return 0;
}
