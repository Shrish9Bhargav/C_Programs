#include<stdio.h>
int main(){
    int n,is_prime;
    printf("Enter a number: ");
    scanf("%d",&n);

    is_prime = 0;
     for (int x = 2; x < n; x++)
     {
        if (n % x == 0)
        {        
            is_prime = 1;
            break;
        }
    }
switch (is_prime){
    case 0:
        printf( "Number is prime");
        break;
    default:
        printf( "Number is NOT prime");
        break ;
}
return 0;
}