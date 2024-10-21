#include<stdio.h>
void main()
{
    char x;
    printf("enter the character : ");
    scanf("%c",&x);
    if(x== 'a' || x == 'e' || x== 'i' || x=='o' || x== 'u' )
    {
        printf("THE GIVEN CHARACTER IS VOWEL");
    }
    else
    {
        printf("THE GIVEN CHARACTER IS NOT A VOWEL");
    }
    
}
