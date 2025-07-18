// Temperature conversion functions
#include<stdio.h>
float far(float x);
int main(){
    float cel;
    printf("Enter themperature in celsius\n");
    scanf("%f", &cel);
    printf("Temprature in Farien heat is : %f\n", far(cel));
}

float far(float x){
    float f = x * (9.0/5.0) + 32;
    return f;
}