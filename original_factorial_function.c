#include<stdio.h>
#include<math.h>

int fact(int);

int main()
{	

	printf("The factorial of the given number is : %d", fact(5));
	return 0;
}

int fact(int n)
{
	
	if(n==0 || n==1)
	{
		return 1;
	}
	return n * fact(n-1); 
}
