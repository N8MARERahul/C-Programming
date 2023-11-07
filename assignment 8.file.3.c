//3. Write a C Program to print contents of file.

#include <stdio.h>
#define MAX_FILE_NAME 100
 
int main() {
    FILE *fp;
    
    char filename[MAX_FILE_NAME];
    char c; // To store a character read from file
 
    // Get file name from user. The file should be
    // either in current folder or complete path should be provided
    printf("Enter file name: ");
	gets(filename);
 
    // Open the file
    fp = fopen(filename, "r");
 
    // Check if file exists
    if (fp == NULL) {
        printf("Could not open file %s", filename);
        return 0;
    }
 
    // Extract characters from file and store in character c
    for (c = getc(fp); c != EOF; c = getc(fp))
        printf("%c", c);
 
    // Close the file
    fclose(fp);
 
    return 0;
}
