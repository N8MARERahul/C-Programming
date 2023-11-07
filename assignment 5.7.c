//7. Write a C program to print all Prime numbers between 1 to n.
#include<stdio.h>

int main() {
	int n, i, j, flag;
	printf("Enter the nth term: ");
	scanf("%d", &n);
	
	printf("Prime Numbers between 1 and %d are:\n", n);
	for (j = 2; j <= n; j++) {
		flag = 0;
		for (i = 2; i <= j / 2; i++) {
			if (j % i == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			printf("%d, ", j);
	}
	printf("\b\b ");
	return 0;
}
