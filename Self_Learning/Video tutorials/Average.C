#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,n,avg;
   
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&n);
    avg=(a+b+n)/3;
    printf("The average of the numbers is %d",avg);

    return 0;
}