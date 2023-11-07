//6. Write a program to input a binary number in an array and convert into corresponding decimal number.

#include<stdio.h>
#include<math.h>

int main() {
	int len, i, dec = 0, bi = 0;
	printf("Enter the length of the Binary Number: ");
	scanf("%d", &len);
	int bin[len];
	
	printf("Enter the Binary Digit One by one:\n");
	for (i = 0; i < len; i++) {
		printf("%d digit: ", i + 1);
		scanf("%d", &bin[i]);
	}		
		
	for (i = 0; i < len; i++) {
		dec += bin[i] * pow(2, len - i - 1);
		bi = bi * 10 + bin[i];
	}
	
	printf("Decimal number of the given binary number %d is = %d", bi, dec);
	return 0;
}
