//2. Write a C program to find all factors of a number.
#include<stdio.h>

int main() {
	int num, i;
	printf("Enter a Number: ");
	scanf("%d", &num);
	printf("Factors of %d are:\n", num);
	for (i = 1; i <= num; i++) {
		if (num % i == 0) 
			printf("%d, ", i);
	}
	printf("\b\b ");
	return 0;
}
