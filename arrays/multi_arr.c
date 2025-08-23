

//2D arrays

// write a function to read the number of add numbers in an array

#include<stdio.h>

int oddNumCount(int arr[], int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    int size = sizeof(arr) / sizeof(arr[0]);//calculaten the size of array
    printf("%d\n", oddNumCount(arr, size));
    return 0;
}

int oddNumCount(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    return count;
}



