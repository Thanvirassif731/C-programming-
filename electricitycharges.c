//Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill
#include<stdio.h>
#include<conio.h>
int main()
{
	printf("For first 50 units Rs. 0.50/unit.   \nFor next 100 units Rs. 0.75/unit. \nFor next 100 units Rs. 1.20/unit.  \nFor unit above 250 Rs. 1.50/unit.  \nAn additional surcharge of 20% is added to the bill");
	int unt;
	float amt;
	printf("\n\n\nTo calculate the electricity unit charges, Enter the total amount of units runned :::");
	scanf("%d",&unt);
	
	if(unt<=50)
	{
		amt=unt+(0.50/20*100);
		printf("The total electricity bill (additional surcharges '20 percentages') : %f ",amt);
	}
	else if(unt<=100)
	{
		amt=unt+(0.75/20*100);
		printf("The total electricity bill (additional surcharges '20 percentages') : %f ",amt);
	}
	else if(unt<=200)
	{
		amt=unt+(1.25/20*100);
		printf("The total electricity bill (additional surcharges '20 percentages') : %f ",amt);
	}
	else if(unt<=250)
	{
		amt=unt+(1.50/20*100);
		printf("The total electricity bill (additional surcharges '20 percentages') : %f ",amt);
	}
}
