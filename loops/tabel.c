//prints the mathematical tabel tabel

#include<stdio.h>
int main(){
    int n, j = 1, k = 10;
    printf("Enter the number you want to print the tabel\n");
    scanf("%d", &n);
    printf("============================================================================================\n");
    printf("Tabel of %d :Using for loop\n", n);
    printf("============================================================================================\n");

    for(int i=1; i <= 10; i++){
        printf("%d   *   %d  =   %d\n", n, i, n*i);
    }
    printf("============================================================================================\n");
    printf("============================================================================================\n");
    printf("Tabel of %d :Using while loop\n", n);
    printf("============================================================================================\n");
    
    while (j <= 10)
    {
        printf("%d   *   %d  =   %d\n", n, j, n*j);
        j++;
    }
    printf("============================================================================================\n");
    printf("============================================================================================\n");
    printf("Tabel of %d :Using do while loop (printing in revers order)\n", n);
    printf("============================================================================================\n");

    do
    {
        printf("%d  *   %d  =  %d\n", n, k, n*k);
        k--;
    } while (k >= 1);
    printf("============================================================================================\n");

    
}