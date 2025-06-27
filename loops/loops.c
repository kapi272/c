/*
 what are loops in C?
 Loops in C are control flow statements that allow code to be executed repeatedly based on a
 condition. They are used to perform repetitive tasks without having to write the same code multiple times. 
 */


// The main types of loops in C are `for`, `while`, and `do-while` loops. Each type has its own syntax and use cases:

/* 
    1. "for loop": Used when the number of iterations is known beforehand.
    Syntax:
    ```c
    for (initialization; condition; increment/decrement) {
       // Code to be executed
    }
    ```

    Example:
    ```c
    #include <stdio.h>
    int main() {
        for (int i = 0; i < 5; i++) {
            printf("Iteration %d\n", i);
        }
        return 0;
    }
    ```
*/

/*    
    2. "while loop": Used when the number of iterations is not known and the loop continues until a specific condition is false.
    Syntax:
    ```c
    while (condition) {
        // Code to be executed
    }
    ```

    Example:
    ```c
    #include <stdio.h>
    int main() {
        int i = 0;
        while (i < 5) {
            printf("Iteration %d\n", i);
            i++;
        }
        return 0;
    }
    ```
*/   

/* 
   3. "do-while loop": Similar to the while loop, but guarantees that the code block is executed at least once before checking the condition.
   Syntax:
    ```c
    do {
        // Code to be executed
    } while (condition);
    ```
    
    Example:
    ```c
    #include <stdio.h>
    int main() {
        int i = 0;
        do {
            printf("Iteration %d\n", i);
            i++;
        } while (i < 5);
        return 0;
    }
*/    ```
