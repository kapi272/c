//creat string first name and last name and print it 
//then concatenate both the strings and print it 
#include <stdio.h>
#include <string.h>

int main() {
    char firstName[20];
    char lastName[20];
    char fullName[40];

    printf("Enter first name: ");
    scanf("%s", firstName);
    printf("Enter last name: ");
    scanf("%s", lastName);

    // concatenate first name and last name
    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("Full name: %s\n", fullName);

    return 0;
}