# include<stdio.h>
# include<conio.h>
int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
     printf("Enter the second number: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("The first number after swapping is %d\n",a);
     printf("The second number after swapping is %d\n",b);
    


    return 0;
}
