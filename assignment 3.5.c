//5. Write a C program to check whether a number is even or odd.
#include<stdio.h>

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if (num % 2 == 0)
		printf("The number %d is an Even Number...", num);
	else
		printf("The number %d is an Odd Number...", num);
	return 0;
}
