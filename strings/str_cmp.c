//compear two str and return value

#include<stdio.h>
#include<string.h>

int main(){
    char firststr[] = "apple";
    char secondstr[] = "bannanaaaaa";
    printf("%d", strcmp(firststr, secondstr)); // first < second, so output is '-1'
}

// POSITIVE -> first > second (ASCII)

// NEGATIVE -> first < second (ASCII)

// ZERO -> first = second (ASCII)