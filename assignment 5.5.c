//5. Write a C program to find LCM of two numbers.
#include<stdio.h>

int main() {
	int num_1, num_2, max;
	printf("Enter the first number: ");
	scanf("%d", &num_1);
	printf("Enter the second number: ");
	scanf("%d", &num_2);
	
	max = num_1 > num_2 ? num_1 : num_2;
	while (max % num_1 != 0 || max % num_2 != 0)
		max++;
	printf("LCM of %d and %d is = %d", num_1, num_2, max);
	return 0;
}
