#include<stdio.h>

int main()
{
    char ascii;
    printf("Enter the character for upper/lower case : \n");
    scanf("%c",&ascii);

// 97-122 are lowercase in ASCII...
    if(ascii<=122 && ascii>=97)
    {
        printf("This character is Lowercase!");
    }
// 65-90 are Uppercase in ASCII...
    else if(ascii<=90 && ascii>=65)
    {
        printf("This character is Uppercase!");
    }
    else
    {
        printf("This is not a character!");
    }
}