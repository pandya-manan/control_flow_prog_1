#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number\n");
    scanf("%d",&number);
    if(number<0)
    {
        printf("The entered number %d is negative",number);
    }
    else if(number>0)
    {
        printf("The entered number %d is positive",number);
    }
    else
    {
        printf("The entered number %d is zero",number);

    }
    return 0;

}