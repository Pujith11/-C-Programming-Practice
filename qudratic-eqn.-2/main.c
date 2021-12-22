#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float a,b,c,root,disc,root1,root2;
    printf("Enter the Coeffecients\n");
    scanf("%f %f %f", &a, &b, &c);
    if(a==0&&b==0)
    {
        printf("No roots\n");
    }
    if(a==0&&b!=0)
    {
        printf("Linear root= %0.3f\n",-c/b);
        exit(0);
    }
    else
    {
        disc=b*b-4*a*c;
        if(disc>0)
        {
            printf("Roots are real and distinct\n");
            printf("root1 = %0.3f\n",(-b+sqrt(disc))/(2*a));
            printf("root2 = %0.3f\n",(-b-sqrt(disc))/(2*a));
        }
        else if(disc==0)
        {
            printf("Roots are real and equal\n");
            printf("root1=root2=0.3%f\n",-b/(2*a));
        }
        else
        {
            printf("roots and imaginary\n");
            printf("root1=%0.3f+i%0.3f\n",-b/(2*a),(sqrt(abs(disc)))/(2*a));
            printf("root2=%0.3f-i%0.3f\n",-b/(2*a),(sqrt(abs(disc)))/(2*a));
        }
            
        return 0;
    }
    
    
    
}