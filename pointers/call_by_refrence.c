// call by reference: address of the actual parameter is passed
#include<stdio.h>

void square(int *x); // function declaration

int main(){
    int numb; // local variable instead of global
    
    printf("Enter the number: ");
    scanf("%d", &numb); // removed \n from scanf
    
    printf("Original number: %d\n", numb);
    square(&numb);
    printf("After function call: %d\n", numb);
    
    return 0;
}

void square(int *x){
    *x = (*x) * (*x);
    printf("Square is %d\n", *x);
}
