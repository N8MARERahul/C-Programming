//3. Write a program to insert an element in an array in a particular position.

#include<stdio.h>

int main() {
	int pos, i, len, ele;
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
		
	printf("\nEnter the position where you want to insert: ");
	scanf("%d", &pos);
	
	printf("Enter the Element: ");
	scanf("%d", &ele);
	
	for (i = len; i >= pos; i--) {
		arr[i + 1] = arr[i]; 
	} 
	arr[pos] = ele;
	len++;
	
	printf("The new array is-->\n");
	for (i = 0; i < len; i++)
		printf("%d\t", arr[i]);
	
	return 0;
}
