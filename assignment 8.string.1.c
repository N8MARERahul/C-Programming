//1. Write a C program to compare two strings.

#include <stdio.h>

int main() {
  char str1[20], str2[20];
  int i;

  printf("Enter the first string: ");
  scanf("%s", str1);

  printf("Enter the second string: ");
  scanf("%s", str2);

  for (i = 0; str1[i] == str2[i]; i++)
     if(str1[i]=='\0'||str2[i]=='\0')
        break;

  if (str1[i]=='\0' && str2[i]=='\0')
    printf("The strings are equal.\n");
	else
    printf("The strings are not equal.\n");

  return 0;
}
