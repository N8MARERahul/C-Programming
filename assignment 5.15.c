/*15. C program to print following pyramid:
	    1
	   123
	  12345
	 1234567
	123456789
*/
#include<stdio.h>

int main() {
	int hight, i, j, k;
	printf("Enter the hight of the pyramid: ");
	scanf("%d", &hight);
	
	for (i = 1; i <= hight; i++) {
		for (j = hight - i; j >= 0; j--)
			printf(" ");
		for (k = 1; k < i * 2; k++)
			printf("%d", k);
		printf("\n");
	}
	return 0;
}
