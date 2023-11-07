/*13. C program to print following pyramid:
				*
			*		*
		*		*		*
	*		*		*		*
*		*		*		*		*
*/

#include<stdio.h>

int main() {
	int hight, i, j, k;
	printf("Enter the hight of the pyramid: ");
	scanf("%d", &hight);
	
	for (i = 1; i <= hight; i++) {
		for (j = hight - i - 1; j >= 0; j--)
			printf("\t");
		for (k = 1; k <= i; k++)
			printf("\t*\t");
		printf("\n\n");
	}
	return 0;
}
