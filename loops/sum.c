// Sum of first n numbers

#include<stdio.h>
int main(){
    
    int n, sum = 0;
    printf("Enter the n valuve\n");
    scanf("%d", &n);

 
    for(int i = 0; i <= n; i++){

        sum = sum + i;
    }

    printf("Sum of first n number is %d\n", sum);

}