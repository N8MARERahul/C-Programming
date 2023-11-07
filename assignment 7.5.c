//5. Write a program to convert a decimal number taken as input from user to corresponding binary number and store the result in an array.

#include<stdio.h>

int main() {
	int num, bin[100], n, i = 0, j;
	printf("Enter a Decimal number: ");
	scanf("%d", &num);
	n = num;
	
	while (n > 0) {
		bin[i] = n % 2;
		n /= 2;
		i++;
	}
	printf("Binary value of %d is = ", num);
	for (j = i - 1; j >= 0; j--)
		printf("%d", bin[j]);
	return 0;
}
