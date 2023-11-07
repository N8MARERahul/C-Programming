//6. Write a C program to check whether a number is Prime number or not.
#include<stdio.h>

int main() {
	int num, i, flag = 0;
	printf("Enter a Number to check: ");
	scanf("%d", &num);
	
	for (i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			flag = 1;
			break;
		}
	}
	
	if (flag == 0)
		printf("The number %d is a Prime Number...", num);
	else
		printf("The number %d is not a Prime Number...", num);
	return 0;
}
