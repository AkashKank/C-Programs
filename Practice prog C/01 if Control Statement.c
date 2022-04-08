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
        printf("\n\t Enjoy Your Shopping");
    }

    printf("\n\t Thanks for Visiting!!!");

    getch();
    return 0;
}
