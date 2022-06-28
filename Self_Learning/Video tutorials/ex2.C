#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        printf("The entered character is in upper case");
    }
    else if(ch>='a' && ch<='z'){
        printf("The entered character is in lower case");
    }
    else{
        printf("Not an english letter");
    }


    return 0;
}