// Temperature conversion functions
#include<stdio.h>

float celsiusToFahrenheit(float celsius);
float fahrenheitToCelsius(float fahrenheit);

int main(){
    float temp;
    int choice;
    
    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1-2): ");
    scanf("%d", &choice);
    
    printf("Enter temperature: ");
    scanf("%f", &temp);
    
    switch(choice){
        case 1:
            printf("%.2f°C = %.2f°F\n", temp, celsiusToFahrenheit(temp));
            break;
        case 2:
            printf("%.2f°F = %.2f°C\n", temp, fahrenheitToCelsius(temp));
            break;
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}

float celsiusToFahrenheit(float celsius){
    return celsius * 1.8f + 32.0f;
}

float fahrenheitToCelsius(float fahrenheit){
    return (fahrenheit - 32.0f) / 1.8f;
}