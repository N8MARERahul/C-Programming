/*1. Write a C program to create a structure named company which has name, address, phone and
noOfEmployee as member variables. Read name of company, its address, phone and
noOfEmployee. Finally display these members" value. */

#include <stdio.h>

struct company {
    char name[20], address[50];
    int phone, noOfEmployee;
};

int main() {
    struct company C1;
    printf("Enter the details of the company:\n");
	printf("Name: ");
	scanf("%s", C1.name);
	printf("Address: ");
	scanf("%s", C1.address);
	printf("Phone: ");
	scanf("%d", &C1.phone);
	printf("noOfEmployee: ");
	scanf("%d", &C1.noOfEmployee);
    printf("Details of the company -->\n");
    printf(" company name = %s \n company address = %s \n company phone = %d \n company noOfEmployee = %d ", C1.name, C1.address, C1.phone, C1.noOfEmployee);
	return 0;
}
