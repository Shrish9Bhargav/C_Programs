#include<stdio.h>
int main(){
    int n,i,is_prime;
    printf("Enter a number to check: ");
    scanf("%d",&n);
    
    is_prime=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0){
            is_prime=1;
            break;
        }
    }
    
    switch(is_prime){
        case 0: printf("The number is prime");
        break;
        default:
    printf("The number is NOT prime");
    break;
    }
    return 0;
}