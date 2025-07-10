//calculate the prise of item after GST
#include<stdio.h>
int cal(float a);

int main(){
    int x;
    printf("Enter the base prise\n");
    scanf(" %d", &x);
    cal(x);
}

int cal(float a){
    return printf("Prise after the GST is %f\n", 0.18 * a + a);
}