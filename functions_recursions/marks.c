// calculate the marks of maths, science and social

#include<stdio.h>
float marks_calculate(int a, int b, int c);
int main(){
    int math, sci, soc;
    printf("Enter marks\n");
    printf("mathematics :");
    scanf("%d", &math);
    printf("science :");
    scanf("%d", &sci);
    printf("social :");
    scanf("%d", &soc);
    printf("The average marks are %f\n", marks_calculate(math, sci, soc));
    return 0;

}

float marks_calculate(int a, int b, int c){
    float result = (a+b+c)/3;
    return result;
}
