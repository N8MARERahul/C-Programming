/*14. C program to print following pyramid:
			    0
			   01
			  010
			 0101
			01010
*/
#include<stdio.h>

int main() {
	int hight, i, j, k, c;
	printf("Enter the hight of the pyramid: ");
	scanf("%d", &hight);
	
	for (i = 1; i <= hight; i++) {
		for (j = hight - i; j >= 0; j--)
			printf(" ");
		c = 0;
		for (k = 1; k <= i; k++) {
			printf("%d", c);
			c = c == 0 ? 1 : 0;
		}
		printf("\n");
	}
	return 0;
}
