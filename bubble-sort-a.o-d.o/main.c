#include <stdio.h>

int main()
{
    int n,a[50],i,j,temp;

    printf("Enter the array size\n");
    scanf("%d",&n);
    printf("Enter the array element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                //swap
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
printf("Sorted Array in ascending order=\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nSorted array in descending order =\n");
    for(i=n-1;i>=0;i--)
    printf("%d\t",a[i]);
        return 0;
}

