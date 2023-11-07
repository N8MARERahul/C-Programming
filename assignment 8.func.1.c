//1. Write a C program to add, subtract, multiply and divide two integers using userdefined type function with return type.

#include<stdio.h>

int add(n1, n2) {
	return (n1 + n2);
}

int subtract(n1, n2) {
	if (n1 > n2)
		return (n1 - n2);
	else
		return (n2 - n1);
}

int multiply(n1, n2) {
	return (n1 * n2);
}

int divide(n1, n2) {
	return (n1 / n2);
}

int main() {
	int num_1, num_2;
	printf("Enter two Integer Numbers: ");
	scanf("%d%d", &num_1, &num_2);
	printf("Addition = %d\n", add(num_1, num_2));
	printf("Subtraction = %d\n", subtract(num_1, num_2));
	printf("Multiplication = %d\n", multiply(num_1, num_2));
	printf("Division = %d\n", divide(num_1, num_2));
	return 0;
}
