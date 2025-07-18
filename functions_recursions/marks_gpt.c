// Enhanced marks calculator with validation and grading
#include<stdio.h>
#include<string.h>

float calculateAverage(int math, int science, int social);
char* getGrade(float average);
int isValidMark(int mark);

int main(){
    int math, science, social;
    float average;
    
    printf("=== Student Marks Calculator ===\n");
    
    // Input with validation
    do {
        printf("Enter Mathematics marks (0-100): ");
        scanf("%d", &math);
        if (!isValidMark(math)) {
            printf("Invalid! Please enter marks between 0-100.\n");
        }
    } while (!isValidMark(math));
    
    do {
        printf("Enter Science marks (0-100): ");
        scanf("%d", &science);
        if (!isValidMark(science)) {
            printf("Invalid! Please enter marks between 0-100.\n");
        }
    } while (!isValidMark(science));
    
    do {
        printf("Enter Social marks (0-100): ");
        scanf("%d", &social);
        if (!isValidMark(social)) {
            printf("Invalid! Please enter marks between 0-100.\n");
        }
    } while (!isValidMark(social));
    
    // Calculate and display results
    average = calculateAverage(math, science, social);
    
    printf("\n=== Results ===\n");
    printf("Mathematics: %d\n", math);
    printf("Science: %d\n", science);
    printf("Social: %d\n", social);
    printf("Total: %d/300\n", math + science + social);
    printf("Average: %.2f%%\n", average);
    printf("Grade: %s\n", getGrade(average));
    
    return 0;
}

float calculateAverage(int math, int science, int social){
    return (float)(math + science + social) / 3.0f; // Fixed integer division
}

char* getGrade(float average){
    if (average >= 90) return "A+";
    else if (average >= 80) return "A";
    else if (average >= 70) return "B+";
    else if (average >= 60) return "B";
    else if (average >= 50) return "C";
    else if (average >= 40) return "D";
    else return "F";
}

int isValidMark(int mark){
    return (mark >= 0 && mark <= 100);
}