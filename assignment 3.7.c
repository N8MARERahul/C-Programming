// 7. Write a C program to check whether a character is alphabet or not.
#include<stdio.h>

int main() {
	char ch;
	printf("Enter an Input to check: ");
	scanf("%c", &ch);
	
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		printf("%c is an Alphabet.", ch);
	else
		printf("%c is Not an Alphabet", ch);
	return 0;
}
