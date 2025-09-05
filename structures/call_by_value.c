//Passing structure to the functions (Call by value)

#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    char name[50];
    float cgpa;
};

// Function that takes a structure as argument (call by value)
void printStudent(struct student s) {
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("CGPA: %.2f\n", s.cgpa);
}

int main() {
    struct student s1;
    s1.roll = 101;
    strcpy(s1.name, "Shyam");
    s1.cgpa = 8.7;

    printStudent(s1); // Pass structure by value

    return 0;
}