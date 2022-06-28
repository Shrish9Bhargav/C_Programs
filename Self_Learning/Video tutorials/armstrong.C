#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int number,a,b,c;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(number>=0 && number<100){
        number%=10;
        a=number;
        number/=10;
        b=number;
        if(pow(a,3)+pow(b,3)==number){
            printf("The entered number is an armstrong number");
        }
        else{
            printf("Not an armstrong number");
        }
    }
    //TODO:-complete the code
    else if(number>=100 && number<1000){
        number%=10;
        a=number;
        number/=10;
        b=number;
        number%=10;
        c=number;
        if(pow(a,3)+pow(b,3)==number){
            printf("The entered number is an armstrong number");
        }
        else{
            printf("Not an armstrong number");
        }
    }
    else{
        printf("The number entered is not correct");
    }
    

    return 0;
}