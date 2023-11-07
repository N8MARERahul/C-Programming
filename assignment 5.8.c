//8. Write a C program to find sum of all prime numbers between 1 to n.
#include<stdio.h>

int main() {
	int n, i, j, flag, sum = 0;
	printf("Enter the nth term: ");
	scanf("%d", &n);
	
	printf("Prime Numbers between 1 and %d and their sum is:\n", n);
	for (j = 2; j <= n; j++) {
		flag = 0;
		for (i = 2; i <= j / 2; i++) {
			if (j % i == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			printf("%d + ", j);
			sum += j;
		}
	}
	printf("\b\b\b ");
	printf("= %d", sum);
	return 0;
}
