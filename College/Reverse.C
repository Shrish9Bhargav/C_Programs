#include<stdio.h>
int main(){
    int n,rev=0;
    printf("Enter a number to make it reverse: ");
    scanf("%d",&n);
    while(n>0){
        rev=(rev*10)+n%10;
        n=n/10;
       
    }
     printf("Reverse of entered number is %d",rev);
     return 0;
}