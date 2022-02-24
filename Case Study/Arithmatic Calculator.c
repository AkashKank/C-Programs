/////////////////////////////////////////////////////////////////////////////////////////////////////////
///
/// Arithmetic Calculator - Case Study
///
////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Add();
void Subtract();
void Multiply();
void Divide();
void Modulo();

int main()
{
    int Choice = 0;

    for(;;)
    {
        fflush(stdin);
        printf("\n\t ****** ARITHMATIC CALCULATOR ******\n\t\t Calculator \n");
        printf("\n================================================\n");
        printf("\n Choices >>\n\t 1.Addition \n\t 2.Subtraction \n\t 3.Multiplication \n\t 4.Division \n\t 5.Remainder \n\t 6.Exit\n");
        printf("\n================================================\n");

        printf("\n Enter Your Choice =");
        scanf("%d",&Choice);

        switch(Choice)
        {
        case 1:
                 Add();
                 getch();
                 system("cls");
                 break;
        case 2:
                 Subtract();
                 getch();
                 system("cls");
                 break;
        case 3:
                Multiply();
                 getch();
                 system("cls");
                 break;
        case 4:
                Divide();
                 getch();
                 system("cls");
                 break;
        case 5:
                Modulo();
                 getch();
                 system("cls");
                 break;
        case 6:
                 break;
        default:
                 printf("\n Invalid Choice");
                 getch();
                 system("cls");
                 break;

        }

        fflush(stdin);

        if(Choice == 6)
        {
            char Sure = '\0';

            printf("\n\n Are You Sure Do You Want To Exit ????? (Yes / No) : ");
            Sure = getchar();

            if(Sure == 'y' || 'Y')
            {
                break;
            }
            else
            {
                printf("\n OK Then Continue!!!");
                printf("\n Press any Key To Continue!!!");
                getch();
                system("cls");
            }
        }
     }
      printf("\n\n **** Thanks For Using Arithmetic Calculator ****");
      printf("\n\n Press Any Key To Exit Application!!!\n");

      _getch();
      return 0;
}

void Add(void)
{
    int N1 = 0, N2 = 0, Sum = 0;

    printf("\n Enter 2 Numbers For Addition = ");
    scanf("%d%d",&N1,&N2);

    Sum = N1 + N2;

    printf("\n\n Addition Of %d and %d is = %d.\n",N1 ,N2 ,Sum);

    return;
}

void Subtract(void)
{
    int N1 = 0, N2 = 0, Sub = 0;

    printf("\n Enter 2 Numbers For Subtraction = ");
    scanf("%d%d",&N1,&N2);

    Sub = N1 - N2;

    printf("\n\n Addition Of %d and %d is = %d.\n",N1 ,N2 ,Sub);

    return;
}

void Multiply(void)
{
    int N1 = 0, N2 = 0, Mult = 0;

    printf("\n Enter 2 Numbers For Multiplication = ");
    scanf("%d%d",&N1,&N2);

    Mult = N1 * N2;

    printf("\n\n Addition Of %d and %d is = %d.\n",N1 ,N2 ,Mult);

    return;
}

void Divide(void)
{
    int N1 = 0, N2 = 0, Div = 0;

    printf("\n Enter 2 Numbers For Division = ");
    scanf("%d%d",&N1,&N2);

    Div = N1 / N2;

    printf("\n\n Addition Of %d and %d is = %d.\n",N1 ,N2 ,Div);

    return;
}

void Modulo(void)
{
    int N1 = 0, N2 = 0, Rem = 0;

    printf("\n Enter 2 Numbers For Remainder = ");
    scanf("%d%d",&N1,&N2);

    Rem = N1 % N2;

    printf("\n\n Addition Of %d and %d is = %d.\n",N1 ,N2 ,Rem);

    return;
}
