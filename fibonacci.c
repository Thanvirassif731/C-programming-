#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of series that you need to print :");
    scanf("%d/n",&n);

    int a=0, b=1, c;
    for (int i=1; i<=n; i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;

    }
}