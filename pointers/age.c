#include<stdio.h>

int main(){
    int age;
    int *ptr = &age;

    printf("Enter the age\n");
    scanf("%d", &age);

    printf("The age is %d\n", age);
    printf("The age is %d\n", *ptr);
    printf("The age is %d\n", *(&age));
    
}