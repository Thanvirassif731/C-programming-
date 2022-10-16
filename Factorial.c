#include<stdio.h>

int main()
{
  int fact, i, n;
  printf("Please enter a number here : ");
  scanf("%d",&n);
  
  while(i<=n)
  {
    fact = fact*i;
    i++;
  }
  printf("The factorial is : %d",n);
  
}
