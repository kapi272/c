/*                    if-else(Syntax)

                    if(CONDITION){
                        // Code to execute if CONDITION is true
                    } else {
                        // Code to execute if CONDITION is false
                    }


                    else if (condition 1) {
                        // Code to execute if CONDITION is true
                    } else(condition 2){
                        // Code to execute if all previous conditions are false
                    }
*/

// program to find upper case or lower case

#include<stdio.h>
 
int main(){
    char ch;
    printf("Enter the Chacter\n");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("Enter chacter is Upper case\n");
    else if(ch >= 'a' && ch <= 'z')
        printf("Enter chacter is Lower case\n");
    else
        printf("Not an english alphabet\n");
    
}
