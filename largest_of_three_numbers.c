#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
    printf("Enter the third number\n");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3)
    {
        printf("The largest number is %d",num1);
    }
    else if(num2>num1 && num2>num3)
    {
        printf("The largest number is %d",num2);

    }
    else
    {
        printf("The largest number is %d",num3);
    }
    return 0;
}