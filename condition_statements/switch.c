//syntax

                            /*
                            
                            switch(number){
                            case 1: //do somthing
                                break;
                            case 2: //do somthing
                                break;
                            default: // do somthing

                            }

                            */

//              switch properties
/*
1. The expression in a switch statement must evaluate to an integral or enumeration type.
2. Each case label must be a constant expression.
3. The break statement is used to exit the switch block. If omitted, execution will "fall through" to the next case.
4. The default case is optional and can be used to handle unexpected values.
*/

// Marks calculater

#include<stdio.h>
int mark;
int main(){
    printf("Enter the marks\n");
    scanf("%d", &mark);

    
    if(mark > 90 && mark < 100)
        printf("a+\n");

    if(mark < 90 && mark > 70)
        printf("a\n");

    if(mark < 70 && mark > 50)
        printf("b\n");

    if(mark < 40)
        printf("Devare gathi odu appa hudugirana bittu\n");

    else
        printf("Enter valid marks\n");

}