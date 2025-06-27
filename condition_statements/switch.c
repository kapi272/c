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

/*                                #include<stdio.h>
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
*/

#include<stdio.h>

int main(){
    int marks;
    printf("Enter the marks scored by std\n");
    scanf("%d", &marks);

    switch (marks/10)
    {
    case 10:
    case 9:
        printf("A+\n");
        break;
    case 8:
    case 7:
        printf("A\n");
        break;
    case 6:
    case 5:
        printf("B\n");
        break;
    case 4:
        printf("c\n");
        break;
    case 3:
    case 2:
    case 1:
        printf("Please read HARD, try next time\n");
        break;
    default:
        printf("Enter valid marks\n");
    }

}

/*Limitation of this is if we enter the singal digit MARKS it will 
show defaault statement says "Enter valid marks, its just a triyal i 
did i can do it with switch rather than the "IF" op
*/ 