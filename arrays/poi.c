#include<stdio.h>

int main(){

    int age = 20;
    int _age = 21;

    int *ptr = &age;
    int *_ptr = &_age;

    printf("Age is %d and %d\n", *ptr, *_ptr);
    printf("Age diffrence is %d years\n", *_ptr - *ptr);

}