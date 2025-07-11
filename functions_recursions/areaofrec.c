// area of rectangele 

#include<stdio.h>
int area(int a, int b);

int main(){
    int x, y;
    printf("Enter the length : ");
    scanf(" %d", &x);
    printf("Enter the breath : ");
    scanf(" %d", &y);

    area(x, y);
    printf("area of rectangel is : %d\n", area(x, y));
}

int area(int a, int b){
    return a * b;
}