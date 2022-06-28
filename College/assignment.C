#include<stdio.h>
#include<conio.h>
int main(){
    int num[10],low,sum=0,i=0,j=1;
    float average;

         printf("\nEnter 10 numbers below :: \n");
      for(i=0;i<10;i++,j++)
      {
          printf("\nEnter number %d :: ",j);
          scanf("%d",&num[i]);
          sum=sum+num[i];
      }


    average=(float)sum/10;
    low=num[0];
    
    for(i=0;i<9;i++){
         if(low>num[i+1])
        {
            low=num[i+1];
        }
    }

    printf("\nThe smallest number among 10 numbers is :: [ %d ]\n",low);
    printf("\nThe sum of the 10 numbers is :: %d\n",sum);
    printf("\nThe average of the 10 numbers is :: %0.2f\n",average);
    
    getch();

}