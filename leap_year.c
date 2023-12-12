#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year \n");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0)
    {
        printf("The given year is a leap year %d",year);
    }
    else if (year%400==0)
    {
        printf("The given year is a leap year %d",year);
    }
    else
    {
        printf("The given year is not a leap year %d",year);
    }
    return 0;
}