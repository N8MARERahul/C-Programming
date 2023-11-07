//3. Write a C program to find first and last digit of a number.
#include<stdio.h>

int main() {
	int num, n;
	printf("Enter a Number: ");
	scanf("%d", &num);
	n = num;
	while(n >= 10) {
		n = n / 10;
	}
	printf("Fist digit is = %d and Last digit is = %d", n, num % 10);
	return 0;
}
