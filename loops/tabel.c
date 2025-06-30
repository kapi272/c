//prints the mathematical tabel tabel

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number you want to print the tabel\n");
    scanf("%d", &n);
    printf("============================================================================================\n");
    printf("Tabel of %d :\n", n);
    printf("============================================================================================\n");

    for(int i=1; i <= 10; i++){
        printf("%d   *   %d  =   %d\n", n, i, n*i);
    }
    printf("============================================================================================\n");
}