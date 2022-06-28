#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    printf("Enter a string to reverse: ");
    gets(s);
    strrev(s);
    printf("Reverse of string is %s",s);

    return 0;
}