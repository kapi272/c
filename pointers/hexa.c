/*

//prints the hexadesiman values

#include<stdio.h>

int main(){
    int x;
    printf("Enter the value of X \n");
    scanf("%d", &x);
    printf("value of x : %d\n", x);
    printf("adress of x is : %d\n", &x);
    printf("adress of x is %p\n", x);

    return 0;
}

*/

//prints the hexadecimal values

#include<stdio.h>

int main(){
    int x;
    printf("Enter the value of X \n");
    scanf("%d", &x);
    
    printf("Value of x: %d\n", x);
    printf("Address of x (decimal): %u\n", (unsigned)&x);
    printf("Address of x (hexadecimal): %p\n", &x);
    printf("Value of x in hexadecimal: 0x%x\n", x);
    
    return 0;
}