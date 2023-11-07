//2. Write a C program to concatenate two strings. 

#include<stdio.h>

int main() {
	char str1[50], str2[50];
	int i, j;
	printf("Enter the 1st string: ");
	gets(str1);
	printf("Enter the 2nd string: ");
	gets(str2);
	
	for (i = 0; str1[i] != '\0'; i++);
	
	for (j = 0; str2[j] != '\0'; j++, i++)
		str1[i] = str2[j];
	str1[i] = '\0';
	
	printf("The concatenated string is: %s", str1);
	return 0;
}
