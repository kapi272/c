//storing student details in structure using the typedef keyword

// typedef shoud always before the main function's


#include<stdio.h>

typedef struct BankAccount{

        int account_no;
        char name[100];
        float balance;
}acc;


int main(){
    
    acc a1 = {123, "Sam", 900.6996};
    acc a2 = {234, "Ram", 12345678.7686};
    acc a3 = {345, "Kom", 659327.45};

    printf("Acc_no  : %d\nName    : %s\nBalance : %.4f\n", a1.account_no, a1.name, a1.balance);
    return 0;

}

