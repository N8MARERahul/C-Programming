//4. Write a C program to find the 3rd element of a string.

#include <stdio.h>

int main() {
	char str[100], third_element;
	printf("Enter a String: ");
	gets(str);
	third_element = str[2];
	printf("Third element is = %c\n", third_element);
	return 0;
}
