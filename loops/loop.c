// skip the number between 1 - 10
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number you want to skip\n");
    scanf("%d", &n);
    printf("================================================================================================\n");
    if (n > 10)
    {
        printf("Enter number between 1 - 10\n");
        return 0;
    }
    

    for(int j = 1; j <= 10; j++){
        if(j == n)
        continue;
        printf("%d\n", j);
    }
}