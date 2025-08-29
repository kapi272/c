#include<stdio.h>
int main(){
    char usn[10];
    printf("Enter usn\n");
    gets(usn); //this program uses gets(), which is unsafe.
    puts(usn);

}