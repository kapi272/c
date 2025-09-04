//storing student details of 3 students

#include<stdio.h>
#include<string.h>
#include<struct.h>

struct student{

    char name[50];
    int Roll;
    float Cgpa;
    char Grade[5];
};

int main(){

    struct student s1,s2,s3;
    strcpy(s1.name, "Shyam");
    strcpy(s2.name, "Kumari");
    strcpy(s3.name, "Govinda");

    s1.Roll = 1;
    s2.Roll = 2;
    s3.Roll = 3;

    s1.Cgpa = 9.6;
    s2.Cgpa = 8.6;
    s3.Cgpa = 7.6;

    strcpy(s1.Grade, "A+");
    strcpy(s2.Grade, "B+");
    strcpy(s3.Grade, "c");


    printf("| Roll number   |    Name     |  Cgpa     |  Grade |\n");
    printf("___________________________________________________\n");
    printf("|      %d        |   %s     |   %.2f    |   %s   |\n", s1.Roll, s1.name, s1.Cgpa, s1.Grade);
    printf("|      %d        |   %s    |   %.2f    |   %s   |\n", s2.Roll, s2.name, s2.Cgpa, s2.Grade);
    printf("|      %d        |   %s   |   %.2f    |   %s    |\n", s3.Roll, s3.name, s3.Cgpa, s3.Grade);

    return 0;

}