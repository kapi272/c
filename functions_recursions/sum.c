// findind sum by using user defined functions

#include<stdio.h>
int sum(int a, int b);

int main(){
    int a, b;
    printf("Enter two number\n");
    scanf("%d\n%d", &a, &b);

    printf("the sum is %d\n", sum(a, b));

    // we can pass " int value to one varibal and print it then "

    int x = sum (a, b);
    printf("The sum is %d\n", x);
    return 0;
}

int sum(int a, int b){
    int sum =  a + b;
    return sum;
}