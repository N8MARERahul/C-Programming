//8. Write a program for deleting duplicate elements in an array.

#include<stdio.h>

int main() {
	int len, i, j, k;
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
		
	for (i = 0; i < len; i++) {
		for (j = i + 1; j < len; j++) {
			if (arr[i] == arr[j]) {
				for (k = j; k < len; k++)
					arr[k] = arr[k + 1];
				j--; 
				len--;
			} 
		}
	}
	printf("\nThe Array after deleting duplicate elements is-->\n");
	for (i = 0; i < len; i++)
		printf("%d\t", arr[i]);
	return 0;
}
