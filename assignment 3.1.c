//1. Write a C program to find maximum between two numbers.
#include <stdio.h>

int main() {
	int num_1, num_2, max;
	printf("Enter the first number: ");
	scanf("%d", &num_1);
	printf("Enter the second number: ");
	scanf("%d", &num_2);
	
	max = num_1 > num_2 ? num_1 : num_2;
	printf("Maximum number is = %d", max);
	return 0;
}
