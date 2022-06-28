#include<stdio.h>
#define lower 0;
#define upper 300;
#define step 20;
int main(){
    int fahrenheit;
    for(fahrenheit=upper; fahrenheit=>lower; fahrenheit-=step){    TODO:
        printf("%3d\t%6.1f",fahrenheit,(5.0/9.0)*(fahrenheit-32));
    }
    return 0;
}