//storing student details using structer, diffrent methond

#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[100];
    float Cgpa;
};

int main(){
    struct student s1 = {1, "Shyam", 9.8};
    struct student s2 = {2, "Janavi", 5.8};
    struct student s3 = {3, "Nayana", 6.7};

    printf("Student roll : %d\n", s3.roll);// prints the roll no student
    printf("=======================================\n");
    struct student *ptr = &s2;
    printf("student roll : %d\n",(*ptr).roll);
    printf("student name : %s\n",(*ptr).name);
    printf("Cgpa         : %.2f\n",(*ptr).Cgpa);
    return 0;
}
