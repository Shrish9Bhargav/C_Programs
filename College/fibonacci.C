#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=1,n=10;
    printf("%d%d",i,j);
    while (n>0)
    {
        printf("%d",i+j);
        j=i+j;
        i=j-i;
        n--;
    }
    
    return 0;
}