//9. Write a C program to input any character and check whether it is alphabet, digit or special character.
#include<stdio.h>

int main() {
	char ch;
	printf("Enter an Input to check: ");
	scanf("%c", &ch);
	
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		printf("Alphabet");
	else if (ch >= '0' && ch <= '9')
		printf("Digit");
	else 
		printf("Special Character");
	return 0;
}
