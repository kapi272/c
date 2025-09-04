//storing the student details using the structures

#include<stdio.h>
#include<string.h>
#include<struct.h>

struct student
{
    int roll;
    float Cgpa;
    char name[50];
};

int main() {
    struct student a1;
    a1.roll = 0001;
    a1.Cgpa = 6.9;
    strcpy(a1.name, "Shyam prasd");// use strcpy to copy string

    printf("Student roll no :  %d\n", a1.roll);
    printf("Student name    :  %s\n", a1.name);
    printf("Student Cgpa is :  %f\n", a1.Cgpa);

    return 0;

}
