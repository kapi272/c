// skips a number if it is multipale on n
// 

#include<stdio.h>
int main(){
    int n, i;
    printf("Enter the number from 1 - 10\n");
    scanf("%d", &n);

    if(n > 10){
        printf("Enter number between 1 - 10 !!!\n");
        return main();
    }

    for(i = 1; i <= 50; i++){
        if(i % n == 0){
            continue;// if we used break it come out of for loop, So we have used continue, it will skip the loop
        }
        printf("%d  ", i);
    }
    printf("End\n");
    return 0;
}