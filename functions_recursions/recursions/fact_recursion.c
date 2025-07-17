// factorial of first n numbers

#include<stdio.h>

int fact(int n);

int main(){
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);

    printf("Factorial of first %d numbers is %d\n", x, fact(x));
    return 0;
}

int fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return fact(n-1) * n;
    }
}