#include<stdio.h>
#include<conio.h>

char Ascii(char);

int main()
{
    char ch;

    printf("\n Enter any Character to Print its Ascii Value : ");
    scanf("%c",&ch);

    Ascii(ch);

    return 0;
}

char Ascii(char i)
{
    printf("\n\t Ascii Value of given Character is %d",i);

    return i;
}
