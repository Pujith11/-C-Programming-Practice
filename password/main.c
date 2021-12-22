#include<stdio.h>

main()
{
    int password;
    printf("Enter The Password\n");
    scanf("%d",&password);
    if(password==9876)
    {
        printf("Correct Password\n");
    }
    else
    {
        printf("Incorrect Password\n");
    }
}
