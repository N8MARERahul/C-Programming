//4. Write a program to delete an element from a particular position of an array.

#include<stdio.h>

int main() {
	int pos, i, len;
	printf("Enter the length of the Array: ");
	scanf("%d", &len);
	int arr[len + 1];
	
	printf("Enter the Elements of the Array:\n");
	for (i = 0; i < len; i++) {
		printf("%d Element: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf("The array is-->\n");
	for (i = 0; i < len; i++)
		printf("%d\t", arr[i]);
		
	printf("\nEnter the position where you want to Delete: ");
	scanf("%d", &pos);
	
	for (i = pos; i < len - 1; i++)
		arr[i] = arr[i + 1]; 
	len--;
	
	printf("The new array is-->\n");
	for (i = 0; i < len; i++)
		printf("%d\t", arr[i]);
	
	return 0;
}
