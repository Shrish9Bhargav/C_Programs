#include<stdio.h>
#include<conio.h>
int main(){
    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);
    if(marks>30){
        printf("Congrats you have passed!!");
    }
    else if(marks<=30){
        printf(";-; you failed");
    }


return 0;
}