//3. Write a C program to add two numbers using pointers.

#include <stdio.h>
int main()
{
   int first, second, *p, *q, sum;

   printf("Enter two integers to add: ");
   scanf("%d%d", &first, &second);

   p = &first;
   q = &second;

   sum = *p + *q;

   printf("Sum of the numbers = %d\n", sum);

   return 0;
}
