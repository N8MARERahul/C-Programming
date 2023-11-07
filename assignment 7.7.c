//7. Write a program to find the smallest and the largest elements in an array.

#include<stdio.h>

int main() {
	int len, i, large, small;
	printf("Enter the Length of the Array: ");
	scanf("%d", &len);
	int arr[len];
	
	printf("Enter the Elemnets of the Array:\n");
	for (i = 0; i < len; i++) {
		printf("%d Element: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	large = arr[0];
	small = arr[0];
	
	for (i = 1; i < len; i++) {
		if (arr[i] > large)
			large = arr[i];
		if (arr[i] < small)
			small = arr[i];
	}
	printf("Largest elemnt = %d\nSmallest element = %d", large, small);
	return 0;
}
