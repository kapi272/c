//copys the string

//copys the value of old string to new string

#include<stdio.h>
#include<string.h>

int main(){

    char oldstr[] = "Old string";
    char newstr[] = "New string";
    strcpy(newstr, oldstr);
    puts(newstr);

}