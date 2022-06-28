#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Enter numbers. (other chars to end)\n");
int min,input;
scanf("%d",&min);
while (scanf("%d",&input)!=0){
 if (input<min)
  min=input;
printf("min: %d\n",min);
input++;
}
TODO:-COMPLETE THE CODE
}