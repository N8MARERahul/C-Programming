/*12. C program to print following pyramid:
*****
****
***
**
*
*/

#include<stdio.h>

int main() {
	int hight, i, j;
	printf("Enter the hight of the pyramid: ");
	scanf("%d", &hight);
	
	for (i = hight; i > 0; i--) {
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}	
	return 0;
}
