// finding the area of circle (floating point)

#include<stdio.h>

float areaofcir(float x);

int main(){
    float r;
    printf("Enter the radius of circle: ");
    scanf("%f", &r);
    
    printf("Area of circle is: %f\n", areaofcir(r));
    return 0;
}

float areaofcir(float x){
    return 3.14f * x * x;
}
