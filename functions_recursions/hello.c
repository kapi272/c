// prints "namaste" for indian user, "bonjer" for french, default hello

#include <stdio.h>

void namaste();
void bonher();

int main(){
    char ch;
    printf("Enter i for namaste and f for bonjer\n");
    scanf(" %c", &ch); // space before %c to ignore whitespace

    if(ch == 'i'){
        namaste();
    } else if (ch == 'f') {
        bonher();
    } else {
        printf("Hello\n");
    }
    return 0;
}

void namaste(){
    printf("Namaste india\n");
}

void bonher(){
    printf("Bonjer french\n");
}