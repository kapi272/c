//marks of subject 

#include<stdio.h>

int main(){

    int marks[3];
    printf("Enter the physics marks\n");
    scanf("%d", &marks[0]);

    printf("Enter the chemistry marks\n");
    scanf("%d", &marks[1]);

    printf("Enter the maths marks\n");
    scanf("%d", &marks[2]);

    printf("===================================================================\n"); 
    printf("physics : %d\nchemistry : %d\nmaths : %d\n", marks[0], marks[1], marks[2]);
    printf("===================================================================\n"); 
    printf("Memory locations information\nPhysics:%d\nchemistry:%d\nmath:%d\n", &marks[0], &marks[1], &marks[2]);
    printf("===================================================================\n"); 
    printf("The compiler is 4 bit\n");
}