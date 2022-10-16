#include<stdio.h>

int main()
{
    int i, n;
    int t1=0; 
    int t2=1;
    int nextterm=t1+t2;
    printf("Enter the no.of items :");
    scanf("%d",&n);
    for(i=3;i<=n;i++)
    {
        printf("%d",nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;

    }
    return 0;
}