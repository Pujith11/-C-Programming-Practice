// Online C compiler to run C program online
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    int n;
    printf("Enter the number\n"); 
    scanf("%d %d",&a,&b);
    printf("1.Add\n");
    printf("2.Sub\n");
    printf("3.Mult\n");
    printf("4.divide\n");
    printf("5.modulus\n");
    printf("Enter the choice of operation\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1: c=a+b;
        printf("The output is %d\n",c );
        break;
        
        case 2: c=a-b;
        printf("The output is %d\n",c);
        break;
        
        case 3: c=a*b;
        printf("The output is %d\n",c);
        break;
        
        case 4: 
        if(b==0)
        {
         printf("Divide by Zero Error!\n");
        }
        else 
        { 
            c=a/b;
            printf("The output is %d\n",c);
            break;
        }
         case 5: c=a%b;
         printf("The output is %d\n",c);
         break;
         
         default : printf("Invalid Input/n");
         break;
    }
    
        
        
}