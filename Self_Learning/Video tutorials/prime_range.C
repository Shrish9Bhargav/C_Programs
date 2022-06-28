#include<stdio.h>
int main(){
    int i,n,is_prime;
    printf("Enter the range from zero to");
    scanf("%d",&n);
     
     is_prime=0;
     for(i=0;i<=n;i++)
     {
        if(n%i==0)
        {
            is_prime=1;
            continue;
        }
        switch(is_prime){
         case 0:printf("%d",i);
            break;
        default:
            printf("No such numbers found!");
            break;
     }

     return 0;
     }
}
 TODO: COMPLETE IT!!