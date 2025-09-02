//concatenate the two strings

#include<stdio.h>
#include<string.h>

int main(){
    char fname[20] = "Shyam ";// initialized with a valid string and null terminator
    char lname[] = "prasad";

    strcat(fname, lname);
    puts(fname);
}