//a copy of variables are made and passed to the function

#include<stdio.h>

void sqer(int x); // USER DEFINED FUNCTION

int number; // golbel decleration of varibels so that it can acessed in user defined functions

int main(){

    printf("Enter the number : ");
    scanf("%d", &number);

    sqer(number);
    return 0;

}

//this function will not affect the value of number
void sqer(int x){
    x = x * x;
    printf("Squear of %d : %d\n", number, x);
}