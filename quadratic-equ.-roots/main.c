/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c;
    float D,r1,r2,r;
    printf("Calculate The Roots Of Quadratic Equation.\n");
    printf("Enter The value of a,b & c simultaneously.\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    D=((b*b)-(4*a*c));
    if(a==0&&b==0)
    {
        printf("No Roots Possible\n");
    }
    else if(a==0&&b!=0)
    {
        printf("Linear Equation\n");
        r=-(c/b);
        printf("Only One Root %f\n",r);
        
    }
    else;
    if(D>0)
    {
        printf("Real Roots\n");
        r1=(-b+sqrt(D))/(2*a);
        r2=(-b-sqrt(D))/(2*a);
        printf("The Roots Are %f And %f\n",r1,r2);
    }
    else if(D==0)
    {
        r1=r2=-(b/(2*a));
    }
    else
    {
        r1=-(b/(2*a));
        r2=sqrt(abs(D))/2*a;
        printf("The roots are imaginary\n");
        printf("The first root is %f + i%f\n",r1,r2);
        printf("The second root is %f - i%f\n",r1,r2);
    }
    
    return 0;
}

