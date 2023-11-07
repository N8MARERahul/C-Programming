//4. Write a C program to swap first and last digits of a number.
#include<stdio.h>
#include<math.h>

int main() {
	int num, n, digit, first_digit, last_digit, swap_num;
	printf("Enter the Number: ");
	scanf("%d", &num);
	n = num;
	digit = log10(num);
	first_digit = num / pow(10, digit);
	last_digit = num % 10;
	
	n = (n % (int)pow(10, digit)) / 10;
	
	swap_num = (last_digit * pow(10, digit)) + n * 10 + first_digit;
	printf("%d", swap_num);
	return 0;
}
