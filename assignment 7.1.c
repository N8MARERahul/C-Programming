//1. Write a program to store marks for n number of student in an array and print their marks.
#include<stdio.h>

int main() {
	int n, i;
	printf("Enter the number of students: ");
	scanf("%d", &n);
	int std[n];
	
	for (i = 0; i < n; i++) {
		printf("Enter the score of %d student: ", i + 1);
		scanf("%d", &std[i]);
	}
	for (i = 0; i < n; i++)
		printf("Score of student no %d is = %d\n", i + 1, std[i]);
	return 0;
}
