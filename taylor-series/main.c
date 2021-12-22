/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Program-6:
#include<stdio.h>
 
void main()
{
    int i, n;
    float x, sum, t;
   
     
    printf(" Enter the value for x : ");
    scanf("%f",&x);
     
    printf(" Enter the value for n : ");
    scanf("%d",&n);
     
    x=x*3.14159/180;
    t=x;
    sum=x;
     
    /* Loop to calculate the value of Sine */
    for(i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+t;
    }
     
    printf(" The value of Sin(%f) = %.5f",x,sum);
  }

