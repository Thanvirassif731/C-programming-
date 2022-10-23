#include<stdio.h>

int main()
{
    int marks;
    printf("Please enter your marks here : ");
    scanf("%d",&marks);

    if(marks>90)
    {
        printf("Your grade is 'A'");
    }
    else if(marks>80 && marks<=90)
    {
        printf("Your grade is 'B'");
    }
    else if(marks>70 && marks<=80)
    {
        printf("Your grade is 'C'");
    }
    else if(marks>70 && marks<=60)
    {
        printf("Your grade is 'D'");
    }    
    else
    {
        printf("Your grade is 'E'");
    }
}
