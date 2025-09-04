//storing student details using struct, different method

#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[100];
    float Cgpa;
};

int main(){
    struct student s[3] = {
        {1, "Shyam", 9.8},
        {2, "Nayana", 6.7},
        {3, "Janavi", 5.8}
        
    };

    for(int i = 0; i < 3; i++){
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].Cgpa);
    }

    return 0;
}