#include "myMath.h"
#include <stdio.h>
#define e 2.718281828

double Exponent(int x)
{
    double ep = 1.0;
    if (x >= 0)
    {
        for (int i = 0; i < x; i++)
        {
            ep = ep * e;
        }
        return ep;
    }
    else
    {
        for (int i = 0; i > x; i--)
        {
            ep = ep * e;
        }
        return 1 / ep;
    }
}

double Power(double x, int y)
{
    double p = 1.0;
    if(x==0){ return x;}
    if(y==0){return 1;}
    
    if (y>= 0)
    {
        for (int i = 0; i < y; i++)
        {
            p = p * x;
        }
     
            return p;
  
        
    }
    else
    {
      
        for (int i = 0; i > y; i--)
        {
            p = p * x;
        }
            return 1/p;
        
    }
}
