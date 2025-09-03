//check if given chater is present in string or not

#include<stdio.h>
#include<string.h>

int check(char str[], char pat);

int main(){

    char name[20] = "Sam the demi god";
    char patran = 'n'; //character to search

    if (check(name, patran))
        printf("Char is present\n");
    else
        printf("Char not present\n");

    return 0;
    
}

int check(char str[], char pat){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == pat)
            return 1; //found
    }

    return 0; //not found
    
}