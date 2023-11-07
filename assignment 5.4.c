//4. Write a C program to find HCF (GCD) of two numbers.
#include<stdio.h>

int main() {
	int num_1, num_2, i, gcd, min;
	printf("Enter the first number: ");
	scanf("%d", &num_1);
	printf("Enter the second number: ");
	scanf("%d", &num_2);
	
	min = num_1 > num_2 ? num_2 : num_1;
	for (i = 1; i <= min; i++) {
		if (num_1 % i == 0 && num_2 % i == 0)
			gcd = i;
	}
	printf("HCF(GCD) of %d and %d is = %d", num_1, num_2, gcd);
	return 0;
}
