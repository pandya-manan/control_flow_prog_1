#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number\n");
    scanf("%d",&number);
    printf("The factors of the number %d are: ",number);
    for(int i=1;i<=number;i++)
    {
        if(number%i==0)
        {
             printf("%d ",i);
        }
       
    }
    return 0;
}