// prints table of a number 

#include<stdio.h>

void tabel(int x);

int main(){
    int a;
    printf("Enter the number :");
    scanf("%d", &a);

    tabel(a); // This will print the table
    return 0;
}

void tabel(int x){
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", x, i, x * i);
    }
}