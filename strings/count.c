//count the vowls in the string (A, E, I, O, U)

#include<stdio.h>
#include<string.h>

int noOfOvwls(char str[]);

int main(){
    char name[50] = "AEIOU aeiou";
    noOfOvwls(name);
    printf("Nof ovels in string is %d\n", noOfOvwls(name));
}

int noOfOvwls(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        count++;
    }

    return count;
}