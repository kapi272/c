// used to determine the flow of control in a program

// a)Sequential control instruction

// b)Decision control instruction (if, if-else, switch-case)

// c)Loop control instruction (for, while, do-while)

// d)Case control instruction (break, continue, goto)

// e)Function call control instruction (function calls, return)



// Example of a) Sequential control instruction
int a = 5;
int b = 10;
int sum = a + b; // Executes one after another


// Example of b) Decision control instruction
if (a < b) {
    printf("a is less than b\n");
} else {
    printf("a is not less than b\n");
}


// Example of c) Loop control instruction
for (int i = 0; i < 3; i++) {
    printf("Loop iteration %d\n", i);
}


// Example of d) Case control instruction
for (int i = 0; i < 5; i++) {
    if (i == 2) {
        continue; // Skips the rest of the loop when i == 2
    }
    if (i == 4) {
        break; // Exits the loop when i == 4
    }
    printf("%d ", i);
}
printf("\n");


// Example of e) Function call control instruction
int add(int x, int y) {
    return x + y; // return statement controls flow
}

int result = add(3, 4);
printf("Result = %d\n", result);

