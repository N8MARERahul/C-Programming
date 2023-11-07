//1. Write a C program to calculate factorial of a number.
#include<stdio.h>

int main() {
	int num, fact = 1, i;
	printf("Enter a Number: ");
	scanf("%d", &num);
	for (i = num; i >= 1; i--) {
		fact = fact * i;
	}
	printf("Factorial of %d is = %d.", num, fact);
	return 0;
}
