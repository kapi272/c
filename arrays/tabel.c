//printing the tabels using 2d array
#include<stdio.h>

int tabel(int arr[][10], int i, int number);

int main(){
    int a;
    printf("enter the number tabel you want\n");
    scanf("%d", &a);
    tabel(0, 10, a);
    return 0;
}

int tabel(int arr[][10], int i, int number){
    printf("Tabel for number %d as follows\n", number);
    printf("===============================\n");
    for(int j = 0; j <= i; j++){
        printf("arr[%d][%d] = %d\n", number, j, number*j);
    }
    return 0;
}