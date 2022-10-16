#include<stdio.h>
#include<conio.h>
void main()
{
	//INPUT
	int year;
	printf("Enter the year here :");
	scanf("%d",&year);
	
	//LEAP YEAR STATEMENT
	//TO CHECK LEAP YEAR, WE SHOULD DIVIDE THE YEAR WITH 100, NEXT WITH 400 & FINALLY, ATLEAST IT SHOULD DIVIDE WITH 4. THE REMINDER SHOULD BE COMES AS 0.
	if(year%100 == 0)
	{
		if(year%400 == 0)
		{
			printf("This is a Leap year!");
		}
		else
		{
			printf("Not a Leap year!");
		}
	}
	else
	{
		if(year%4 == 0)
		{
			printf("This is a Leap year!");
		}
		else
		{
			printf("Not a Leap year!");
		}
	}
}
