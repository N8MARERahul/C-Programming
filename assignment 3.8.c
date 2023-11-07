//8. Write a C program to input any alphabet and check whether it is vowel or consonant.
#include<stdio.h>

int main() {
	char ch, c;
	printf("Enter an Alphabet to check: ");
	scanf("%c", &c);
	ch = tolower(c);
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		printf("%c is a Vowel", c);
	else
		printf("%c is a Consonant", c);
	return 0;
}
