//enter the price of 3 items with 18 percent GST (float)

#include<stdio.h>

int main(){
    float price[3];

    printf("Enter the prices:\nApple: ");
    scanf("%f", &price[0]);
    printf("Ball: ");
    scanf("%f", &price[1]);
    printf("Car (toy): ");
    scanf("%f", &price[2]);

    printf("\nPrices after 18%% GST:\n");
    printf("Apple : %.2f\n", price[0] + price[0] * 0.18);
    printf("Ball  : %.2f\n", price[1] + price[1] * 0.18);
    printf("Car   : %.2f\n", price[2] + price[2] * 0.18);

    return 0;
}