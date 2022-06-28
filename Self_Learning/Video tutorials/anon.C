#include<stdio.h>
#include<conio.h>
int main(){
    int age;
    printf("Enter age : ");
    scanf("%d",&age);

    if(age>18){
        printf("adult \n");
        printf("They can vote ");
        printf("They can drive");

    }
    else{
        printf("Not adult\n");
    }
    printf("Thank you");
    return 0;

}
