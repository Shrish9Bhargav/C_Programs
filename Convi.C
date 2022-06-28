#include <stdio.h>
#include <conio.h>
int main(){
    int n,i ;
    float sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum=sum+1/n;
    
    }
    printf("The sum is:%f",sum);
    return 0;
}