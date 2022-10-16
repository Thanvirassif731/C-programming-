#include<stdio.h>
#include<conio.h>
int main()
{
	//Assinging the variables and data types...
	int num1, num2;
	char opp;
	float res;
	
	printf("Please type anyone of these operators ::: '[+, -, *, /, %]' ::: ");
	scanf("%c", &opp);
	
	printf("You are selected the operator : %c",opp);
	
	printf("\nEnter the First number that you need to calculate : ");
	scanf("%d",&num1);
	printf("Enter the Second number that you need to calculate : ");
	scanf("%d",&num2);
	
	//making arthematical operations using if conditions...
	if(opp=='+')
	{
		res=num1+num2;
		printf("The answer is : %f",res);
	}
	
	else if(opp=='-')
	{
		res=num1-num2;
		printf("The answer is : %f",res);
	}
	
	else if(opp=='*')
	{
		res=num1*num2;
		printf("The answer is : %f",res);
	}
	
	else if(opp=='/')
	{
		if(num2==0)  
		{
			printf("\nThe calculation not done with the Number '0'. So, again tyoe a number : ");
			scanf("%d",&num2);
			res=num1/num2;
			printf("The answer is : %f",res);
		}
		else
		{
			printf("The answer is null");
		}
	}
	
	else if(opp=='%')
	{
		res=num1%num2;
		printf("The answer is : %f",res);	
	}
	
	else
	{
		printf("Sorry! That's an worng number. Try again !");
	}
}
