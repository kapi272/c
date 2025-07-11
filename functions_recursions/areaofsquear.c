// findes the area of Squear by tacking input from user

#include<stdio.h>

int area(int a);

int main(){
    int x;
    printf("Enter the side of Squesr : ");
    scanf(" %d", &x); // if you enter the floting point it we implicitly convert to int

    area(x);
    int y = area(x); 
    printf("Area of squear is : %d\n", y);
}

int area(int a){
    return a * a;
}