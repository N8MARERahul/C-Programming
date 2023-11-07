//2. Define a structure “complex” (typedef) to read two complex numbers and perform addition, subtraction of these two complex numbers and display the result.

#include<stdio.h>

typedef struct complex {
	float real, imag;
} complex;

int main() {
	complex n1, n2, add, sub;

	printf("For the 1st complex number:\nEnter the real and imaginary parts: ");
	scanf("%f%f", &n1.real, &n1.imag);
	printf("For the 2nd complex number:\nEnter the real and imaginary parts: ");
	scanf("%f%f", &n2.real, &n2.imag);
	
	add.real = n1.real + n2.real;
	add.imag = n1.imag + n2.imag;
	
	sub.real = n1.real - n2.real;
	sub.imag = n1.imag - n2.imag;
	
	printf("SUM = %.1f + %.1fi\n", add.real, add.imag);
	printf("DIFFERENCE = %.1f + %.1fi", sub.real, sub.imag);
	return 0;
}
