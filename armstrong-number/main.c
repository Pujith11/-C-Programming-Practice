/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int power(int , int);
int main()
{
    int n,ans;
    printf("Enter A Number\n");
    scanf("%d",&n);
    ans=count(n);
    if(ans==n)
    {
        printf("The Given Number %d is Armstrong number",n);
    }
    else
    {
        printf("The Given Number %d is not Armstrong number",n);
    }
    return 0;
}
count(int a)  //To count the total number digits
{
    int remain,d,temp;
    int sum;
    int digits=0;
    temp=a;         //because after first loop value of a becomes 0
    while(temp!=0) //Counting total number of digits
    {
        digits++;
        temp=temp/10;
    }
    printf("Total number of digits are %d\n",digits);
    while(a!=0)  //To Calculate Sum of each number^(Total number of digits)
    {
        remain=a%10;
        d=power(remain,digits);
        sum=sum+d;
        a=a/10;
    }
    printf("Sum Of Numbers is %d\n",sum);
    return sum;
}
power(int x,int y)  //To Calculate power of each number 
{
    int i,t=1;
    if(y==0)
    {
        return 1;
    }
    else
    {
        for(i=0;i<y;i++)
        {
            t=t*x;
        }
        return t;
    }
}

