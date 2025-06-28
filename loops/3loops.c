// Include all three loops

#include <stdio.h>
int main(){

    int i = 0, j = 0, n;
    printf("Enter the Number\n");
    scanf("%d", &n);

    printf("Using While loop\n");
    while (i <= n) {
        printf("%d   ", i);
        i++;
    }

        printf("\nPrinting in reverse order using while loop\n");
        int w = n;
        while (w >= 0)
        {
            printf("%d   ", w);
            w--;
        }
        

    printf("\nUsing Do-While loop\n");
    do {
        printf("%d   ", j);
        j++;
    } while (j <= n);

        printf("\nPrinting in reverse order using do-while loop\n");
        int d = n;
        do{
            printf("%d   ", d);
            d--;
        }while(d >= 0);


    printf("\nPrinting using for loop\n");
    for (int k = 0; k <= n; k++) {
        printf("%d   ", k);    
    }

        printf("\nPrinting in reverse order using for loop\n");
        for (int r = n; r >= 0; r--) {
            printf("%d   ", r);
        }

    return 0;
}