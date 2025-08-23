//this will include the array in the function parameter

/*

====Function Decleration====
void printNumbers(int arr[], int n);

void printNumbers(int *arr, int n);

====function call====
printNumbers(arr, n);

*/
#include<stdio.h>
void printNumbers(int arr[6], int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    printNumbers(arr, 8);
    return 0;
}

void printNumbers(int arr[], int n){
    for(int i=0; i<n; i++){
    printf("%d\t", arr[i]);
    }
    printf("\n");
}


