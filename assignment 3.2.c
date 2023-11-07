//2. Write a C program to find maximum between three numbers.
#include <stdio.h>

int main() {
	int num_1, num_2, num_3, max;
	printf("Enter the first number: ");
	scanf("%d", &num_1);
	printf("Enter the second number: ");
	scanf("%d", &num_2);
	printf("Enter the third number: ");
	scanf("%d", &num_3);
	
	max = num_1 > num_2 ? num_1 > num_3 ? num_1 : num_3 : num_2 > num_3 ? num_2 : num_3;
	printf("Maximum number is = %d", max);
	return 0;
}
