//6. Write a C program to check whether a year is leap year or not.
#include<stdio.h>

int main() {
	int year;
	printf("Enter the Year to Check: ");
	scanf("%d", &year);
	
	if (year % 100 == 0) {
		if (year % 400 == 0)
			printf("The Year %d is a Leap Year...", year);
		else
			printf("The Year %d is not a Leap Year...", year);
	} else {
		if (year % 4 == 0)
			printf("The Year %d is a Leap Year...", year);
		else
			printf("The Year %d is not a Leap Year...", year);
	}
	return 0;
}
