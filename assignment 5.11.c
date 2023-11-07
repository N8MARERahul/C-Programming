//11. Write a C program to print all Armstrong numbers between 1 to n.
#include <stdio.h>
#include <math.h>

int armstrong(int n) {
	int n2, digit, p, sum = 0;
	n2 = n;
	digit = log10(n) + 1;
	while (n > 0) {
        p = n % 10;
        sum = sum + pow(p, digit);;
        n /= 10;
    }
    if (sum == n2)
    	return 1;
    else 
    	return 0;
}
int main() {
    int i, n1, flag;
    printf("Enter the nth number: ");
    scanf("%d", &n1);
    
	for (i = 1; i <= n1; i++) {
		flag = armstrong(i);
		if (flag == 1) 
			printf("%d\t", i);
	}
    return 0;
}
