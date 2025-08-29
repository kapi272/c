//accessing the strings

#include<stdio.h>
int count(char str[]);
int main(){
    char name[] = "Shyam";
    printf("Length of string(name) : %d\n", count(name));
    return 0;
}

int count(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        count ++;
    }

    return count;
}