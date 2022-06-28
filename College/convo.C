#include<stdio.h>
#include<conio.h>
int main(){
    float a;
    printf("Enter a number: ");
    scanf("%f",&a);
    printf("The conversion of kilometer to meter is %f\n",a*1000);
     printf("The conversion of kilometer to centimeter is %f\n",a*1000*100);
      printf("The conversion of kilometer to inches is %f\n",a*39370.079);
      printf("The conversion of kilometer to feet is %f\n",a*3280);

      return 0;

}
