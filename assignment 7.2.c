//2. Write a program which stores the marks of subject Mathematics and English of n number of students in an array and then prints their individual total marks.

#include<stdio.h>

int main() {
	int n, i;
	printf("Enter the number of students: ");
	scanf("%d", &n);
	int std[n][2];
	
	for (i = 0; i < n; i++) {
		printf("Enter the score of Mathematics of %d student: ", i + 1);
		scanf("%d", &std[i][0]);
		printf("Enter the score of English of %d student: ", i + 1);
		scanf("%d", &std[i][1]);
	}
	for (i = 0; i < n; i++) {
		printf("Mathematics Score of student no %d is = %d\n", i + 1, std[i][0]);
		printf("English Score of student no %d is = %d\n", i + 1, std[i][1]);
	}
	return 0;
}
