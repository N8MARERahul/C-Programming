//2. Write a C program to calculate sum of first 20 natural numbers using recursive function.

#include <stdio.h>

int addNumbers(int n);

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", addNumbers(num));
  return 0;
}

int addNumbers(n) {
  if (n != 0)
    return n + addNumbers(n - 1);
  else
    return n;
}
