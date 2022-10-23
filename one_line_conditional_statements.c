#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number to check : ");
    scanf("%d",&a);
    (a>=18)? printf("Eligible to vote!") : printf("Sorry! Not eligible to vote!!");
}