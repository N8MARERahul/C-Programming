//5. Write a C program to find frequency of each digit in a given integer.
#include<stdio.h>
#include<math.h>

int main() {
 	int num, digit, i;
    int frequency[10] = {0}; // Initialize frequency array with zeros for digits 0 to 9
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Calculate frequency of each digit
    while (num != 0) {
        digit = num % 10; // Extract the last digit
        frequency[digit]++; // Increment the corresponding frequency count
        num /= 10; // Remove the last digit from the number
    }
    
    // Display the frequency of each digit
    printf("Frequency of each digit in the given number:\n");
    for (i = 0; i < 10; i++) {
        printf("Digit %d: %d times\n", i, frequency[i]);
    }
	return 0;
}
