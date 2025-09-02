//slice the strings

#include<stdio.h>
#include<string.h>

void slice(char str[], int n, int m);

int main(){
    char password[50] = "noughtyMan32";
    slice(password, 3, 11);
    return 0;
}

void slice(char str[], int n, int m){
    char newstr[100];
    int j = 0;
    for(int i = n; i <= m && str[i] != '\0'; i++){
        newstr[j] = str[i];
        j++;
    }
    newstr[j] = '\0'; // null terminate the new string
    puts(newstr);
}