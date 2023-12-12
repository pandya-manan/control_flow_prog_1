#include<stdio.h>
int recursionFactorial(int n);
int forLoopFactorial(int n);
int main()
{
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    printf("The factorial calculated by for loop is %d\n",forLoopFactorial(number));
    printf("The factorial calculated by recursion is %d",recursionFactorial(number));
    return 0;
}
int recursionFactorial(int n)
{
    int prod=1;
    if(n==0 || n==1)
    return 1;
    else
    return n*recursionFactorial(n-1);
}

int forLoopFactorial(int n)
{
    int prod=1;
    for(int i=1;i<=n;i++)
    {
        prod*=i;
    }
    return prod;
}