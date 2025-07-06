// factorial of a number

#include<stdio.h>

int main(){
    int n, fact(int n);
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("Fact of number %d is %d\n", n, fact(n)); 
}

int fact(int n){
    int result = 1;
    for(int i = 1; i <= n; i++){ // if you begin the loop from 0, the result will be 0 because multiplying by 0 results in 0
        result = result * i;
    }
    return result;
}