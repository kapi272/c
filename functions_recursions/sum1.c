// finding sum by using user defined functions

#include<stdio.h>
int sum(int a, int b);

int main(){
    int x, y;
    printf("Enter two numbers\n");
    scanf("%d%d", &x, &y);

    printf("The sum is %d\n", sum(x, y));
    return 0;
}

int sum(int a, int b){
    return a + b;
}