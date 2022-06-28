#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num>=1){
        printf("Natural number");
    }
    else{
        printf("Not a natural number");
    }

    return 0;
}