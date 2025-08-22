#include<stdio.h>

int main(){
    int adhar[5];

    //input
    printf("Enter the values\n");
    int *ptr = &adhar[0];
    for(int i=0; i<5; i++){
        printf("Index : %d - ", i);
        scanf("%d", (ptr+i)); // &adhar[i];
    }

    //output
    printf("Out_put\n");
    for(int j=0; j<5; j++){
        printf("index's : %d valuve %d\n", j, *(ptr+j));
    }
    return 0;

}