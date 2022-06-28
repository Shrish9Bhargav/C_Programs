# include<stdio.h>
# include<conio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a==0){
        printf("Equals to zero");
    }
    else if(a>1)
    {
        printf("The number is positive");
    }
    else{
        printf("The number is negative");
    }

    return 0;
}
