//3. Write a C program to generate Fibonacci series using recursive function.

#include <stdio.h>

int fibo(int n);

int main() {

	int num, i;
	printf("Enter the terms of Fibonacci Series: ");
	scanf("%d", &num);
	printf("Fibonacci series\n");
	for (i = 0; i < num; i++)
		printf("%d\t", fibo(i));
	return 0;
}

int fibo(int n) {
	if (n == 0)
    	return 0;
	else if (n == 1)
    	return 1;
	else 
		return (fibo(n - 1) + fibo(n - 2));
}

