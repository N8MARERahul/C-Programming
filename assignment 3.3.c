//3. Write a C program to check whether a number is negative, positive or zero.
#include<stdio.h>

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if (num > 0)
		printf("The number %d is a Positive Number.", num);
	else if (num < 0)
		printf("The number %d is a Negative Number.", num);
	else 
		printf("The number %d is Zero.", num);
	return 0;
}
