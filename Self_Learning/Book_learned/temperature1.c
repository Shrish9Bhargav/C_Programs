#include<stdio.h>
 main(){
   int fahrenheit;
   for(fahrenheit=0;fahrenheit<=300;fahrenheit+=20)
   {
       printf("%3d %6.1f\n", fahrenheit,(5.0/9.0)*(fahrenheit-32.0) );
   }
    return 0;
}