//2. Write a C program to print all Prime numbers between 1 to N.
#include<stdio.h>

int prime_num(int);

int main() {
	int num, i;
	printf("Enter the nth number: ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		if (prime_num(i))
			printf("%d\t", i);
	}
	return 0;
}
int prime_num(int n) {
	int j, flag = 1;
	if (n == 1)
		flag = 0;
	for (j = 2; j <= n/2; j++) {
		if (n % j == 0)
			flag = 0;
	}
	return flag;
}
