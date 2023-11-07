//9. Write a C program to find all prime factors of a number.
#include<stdio.h>

int main() {
	int num, n, c = 2;
	printf("Enter a Number: ");
	scanf("%d", &num);
	n = num;
	
	while (n > 1) {
		if (n % c == 0) {
			printf("%d ", c);
			n /= c;
		} else 
			c++;
	}
	return 0;
}
