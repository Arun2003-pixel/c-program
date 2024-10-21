#include<stdio.h>
int main()
{
    int a;
    printf("enter your age:");
    scanf("%d",&a);
    if(a>18)
    {
        printf("YOU ARE ELIGIBLE TO VOTE");
    }
    else
    {
        printf("YOU ARE NOT ELIGIBLE TO VOTE ");
    }
}
