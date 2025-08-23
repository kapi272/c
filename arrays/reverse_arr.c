//revesing the array
#include<stdio.h>
int reverse(int arr[], int size);

int print_rev_arr(int arr[], int size);

int main(){
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size1  = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {5, 4, 3, 2, 1};
    int size2  = sizeof(arr2) / sizeof(arr2[0]);

    reverse(arr1, size1);
    reverse(arr2, size2);
    print_rev_arr(arr1, size1);
    printf("======================\n");
    print_rev_arr(arr2, size2);

} 

int reverse(int arr[], int size){

    int temp = 0;
    for(int i = 0; i < (size/2); i++){
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int print_rev_arr(int arr[], int size){

    for(int j = 0; j < size; j++){
    printf("arr[%d] = %d\n", j, arr[j]);
    }
}