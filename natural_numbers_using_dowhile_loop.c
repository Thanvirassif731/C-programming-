#include<stdio.h>

int main()
{
    int i=0, n;
    printf("Enter a number here : ");
    scanf("%d",&n);
    do
    {
        printf("%d\n",i);
        ++i;
    } while(i<=n);
  
}