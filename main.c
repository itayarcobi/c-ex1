#include"myMath.h"
#include<stdio.h>

int main (){
double userin=0;
printf("please insert a real number: \n");
scanf("%lf" ,&userin);

double f1;
f1=sub(add(Exponent((int)userin),Power(userin,3)),2);
printf("The value of f(x)=e^x + x^3 - 2 at the point: %lf is: %0.4f.\n",userin,f1);

double f2;
f2=add(mul(userin,3),mul(Power(userin,2),2));
printf("The value of f(x)=3x + 2x^2 at the point: %lf is: %0.4f.\n",userin,f2);

double f3;
f3=sub(div(mul(Power(userin,3),4),5),mul(userin,2));
printf("The value of f(x)=(4x^3)/5 - 2x at the point: %lf is: %0.4f.\n",userin,f3);

return 0;
}