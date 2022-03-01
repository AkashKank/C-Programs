#include<stdio.h>
#include<conio.h>

int Factorial(int);
int main()
{
    int No = 0,Res = 0;

    UP:
        printf("\n Enter Any Number to Find its Factorial : ");
        scanf("%d",&No);

        if(No < 0)
        {
            printf("\n INVALID INPUT............");
            goto UP;
        }

        Res = Factorial(No);

        printf("\n Factorial of Given Number %d is = %d\n\n\n",No,Res);

        getch();
        return 0;
}

int Factorial(Num)
{
    int Fac = 1;

    while(Num > 1)
    {
        Fac = Fac * Num;
        Num--;
    }

    return Fac;
}
