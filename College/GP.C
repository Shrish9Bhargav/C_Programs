#include <stdio.h>
#include <conio.h>
int main(){
    int i;
    float n,sum=0;
    printf("Enter a number: ");
    scanf("%f",&n);
    for(i=0;i<=n;i++){
        sum=sum+1/n;
    
    }
    printf("The sum is:%f",sum);
    return 0;
}