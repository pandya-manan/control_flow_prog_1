#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    char c;
    printf("Enter an english alphabet\n");
    scanf("%c",&c);
    char alphabet=tolower(c);
    if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u')
    {
        printf("The given character is a vowel %c",c);
    }
    else if (alphabet>=97 && alphabet<=122)
    {
        printf("The given character is a consonant %c",c);
    }
    else
    {
        printf("The given character is not a consonant or vowel %c",c);
    }
    return 0;
}