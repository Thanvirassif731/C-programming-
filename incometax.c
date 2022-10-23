#include<stdio.h>

int main()
{
    int salary, tax;
    printf("Enter your salary : ");
    scanf("%d",&salary);

    if(salary>=250000 && salary < 500000)
    {
        tax=salary*5/100;
        printf("The percentage of tax is 5. Total tax you should pay is %d",tax);
    }
    else if (salary>=500000 && salary < 1000000)
    {
        tax=salary*20/100;
        printf("The percentage of tax is ]20. Total tax you should pay is %d",tax);
    }
    else if (salary>=1000000)
    {
        tax=salary*30/100;
        printf("The percentage of tax is 30. Total tax you should pay is %d",tax);
    }
    else
    {
        printf("You are free from tax! Enjoy!!");
    }
}