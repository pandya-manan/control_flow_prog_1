#include<stdio.h>
int forLoopSum(int n);
int whileLoopSum(int n);
int doWhileLoopSum(int n);
int recursionSum(int n);
int main()
{
    int num;
    printf("Enter the range upto which the sum must be calculated\n");
    scanf("%d",&num);
    printf("The sum calculated using for loop %d\n",forLoopSum(num));
    printf("The sum calculated using while loop %d\n",whileLoopSum(num));
    printf("The sum calculated using do while loop %d\n",doWhileLoopSum(num));
    printf("The sum calculated using recursion %d\n",recursionSum(num));
    return 0;
}

int forLoopSum(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}

int whileLoopSum(int n)
{
    int sum=0;
    int i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    return sum;
}

int doWhileLoopSum(int n)
{
    int sum=0,i=1;
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<=n);
    return sum;
}

int recursionSum(int n)
{
    if(n!=0)
    {
        return n+recursionSum(n-1);
    }
    else
    {
        return n;
    }
}