#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

///Function Declaration

int Add(int,int);
int Sub(int,int);
int Mult(int,int);
int Div(int,int);
int Mod(int,int);

///Main Function Declaration

int main()
{
    int Choice = 0,No1 = 0,No2 = 0;

    for(;;)
    {
        printf("******************************* Calculator in C *********************************\n");

        printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

        printf("\n Select Choice = \n\t\t 1.Addition\n\t\t 2.Subtraction\n\t\t 3.Multiplication\n\t\t 4.Division\n\t\t 5.Modulo\n\t\t 6.Exit\n");

        printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

        printf("\n Enter Any Choice for Calculation = ");
        scanf("%d",&Choice);

        switch(Choice)
        {
        case 1:
            printf("\n Enter Two Numbers For Addition = ");
            scanf("%d%d",&No1,&No2);

            printf("\n Addition of %d and %d is = %d",No1,No2,Add(No1,No2));
            getch();
            system("cls");
            break;

        case 2:
            printf("\n Enter Two Numbers For Subtraction = ");
            scanf("%d%d",&No1,&No2);

            printf("\n Subtraction of %d and %d is = %d",No1,No2,Sub(No1,No2));
            getch();
            system("cls");
            break;

        case 3:
            printf("\n Enter Two Numbers For Multiplication = ");
            scanf("%d%d",&No1,&No2);

            printf("\n Multiplication of %d and %d is = %d",No1,No2,Mult(No1,No2));
            getch();
            system("cls");
            break;

        case 4:
            printf("\n Enter Two Numbers For Division = ");
            scanf("%d%d",&No1,&No2);

            printf("\n Division of %d and %d is = %d",No1,No2,Div(No1,No2));
            getch();
            system("cls");
            break;

        case 5:
            printf("\n Enter Two Numbers For Modulo = ");
            scanf("%d%d",&No1,&No2);

            printf("\n Modulo of %d and %d is = %d",No1,No2,Mod(No1,No2));
            getch();
            system("cls");
            break;

        case 6:
            break;

        default:

            printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

            printf("\n Invalid Choice Please Enter Valid Choice.");
            getch();
            system("cls");
            break;
        }
        if(Choice == 6)
        {
            break;
        }
    }

    DWN:
        printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

        printf("\n\n\t\t********** Thanks For Visiting *********");

        getch();
        return 0;
}

///Function Definition

int Add(int N1,int N2)
{
    int Sum=0;

    Sum = N1+N2;

    return Sum;
}

int Sub(int N1,int N2)
{
    int Minus=0;

    Minus = N1-N2;

    return Minus;
}

int Mult(int N1,int N2)
{
    int Multiply=0;

    Multiply = N1*N2;

    return Multiply;
}

int Div(int N1,int N2)
{
    int Divide=0;

    Divide = N1/N2;

    return Divide;
}

int Mod(int N1,int N2)
{
    int Modulo=0;

    Modulo = N1%N2;

    return Modulo;
}
