//printing the strings using the for loop

#include<stdio.h>
void printstring(char arr[]);
int main(){
    char f_name[] = "sam";
    char l_name[] = "prakash";

    printstring(f_name);
    printstring(l_name);
    return 0;
}

void printstring(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}