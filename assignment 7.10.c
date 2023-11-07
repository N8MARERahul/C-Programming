//10. Write a program to sort n elements (ascending order).

#include<stdio.h>

int main() {
	int len, i, j, temp;
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
	    for (j = 0; j < len - i - 1; j++) {
	      if (arr[j] > arr[j + 1]) {
	        temp = arr[j];
	        arr[j] = arr[j + 1];
	        arr[j + 1] = temp;
	      }
	    }
  	}	
  	
	printf("\nAfter sorting the Array is -->\n");
	for (i = 0; i < len; i++)
		printf("%d\t", arr[i]);
		
	return 0;
}
