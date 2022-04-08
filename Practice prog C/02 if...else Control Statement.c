#include<stdio.h>
#include<conio.h>

int main()
{
    float Amount = 0.0;

    printf("\n Enter Your Account Balance = ");
    scanf("%f",&Amount);

    if(Amount > 1000)
    {
        printf("\n\t Welcome");
        printf("\n\n\t Enjoy Your Shopping!!!");
    }
    else
    {
        printf("\n\n\t You Don't Have Sufficient Balance for Shopping");
        printf("\n\n\t You are not eligible for Shopping");
    }

    printf("\n\n\t Thank You for Visiting");

    getch();
    return 0;
}
