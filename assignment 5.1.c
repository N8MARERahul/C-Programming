//1. Write a C program to find power of a number using for loop.
#include<stdio.h>

int main() {
	int base, exp, i; 
	double power = 1;
	printf("Enter the base value: ");
	scanf("%d", &base);
	printf("Enter the exponential value: ");
	scanf("%d", &exp);
	for (i = 1; i <= exp; i++) {
		power *= base;
	}
	printf("%.0lf", power);
	return 0;
}
