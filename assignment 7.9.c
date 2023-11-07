//9. Write a program to search a particular element in an array.

#include<stdio.h>

int main() {
	int len, i, ele, flag = 0;
	printf("Enter the Length of the Array: ");
	scanf("%d", &len);
	int arr[len];
	
	printf("Enter the Elemnets of the Array:\n");
	for (i = 0; i < len; i++) {
		printf("%d Element: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf("The Array is-->\n");
	for (i = 0; i < len; i++)
		printf("%d\t", arr[i]);
		
	printf("\nEnter the element to search: ");
	scanf("%d", &ele);
	
	for (i = 0; i < len; i++) {
		if (arr[i] == ele) {
			printf("The element %d is found at position -> %d\n", ele, i);
			flag = 1;
		}
	}
	if (flag == 0)
		printf("The element %d is not found.", ele);
	return 0;
}
