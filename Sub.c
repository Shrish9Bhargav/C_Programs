#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,diff;
    printf("Enter the first number:  ");
    scanf("%d",&num1);
     printf("Enter the second number:  ");
    scanf("%d",&num2);
    diff=num1-num2;
    printf("The difference of %d and %d is %d",num1,num2,diff);
    
    getch();
    return 0;
}