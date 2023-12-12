#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number whose tables need to be generated\n");
    scanf("%d",&number);
    for (int i=0;i<=10;i++)
    {
        printf("%d * %d = %d\n",number,i,(number*i));
    }
    return 0;
}