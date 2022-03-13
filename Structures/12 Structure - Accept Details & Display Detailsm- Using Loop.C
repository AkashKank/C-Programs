#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stud
{
    int Roll_No;
    char Name[60];
    long long int Mob_No;
    float Per;
};

int main()
{
    struct stud Std[3];
    int i = 0;

    printf("\n Enter Student Details => ");

    for(i = 0; i < 3; i++)
    {
        printf("\n\n Enter Student No %d Details => ", i + 1);

        printf("\n Enter Student Roll No = ");
        scanf("%d",&Std[i].Roll_No);

        printf("\n Enter Student Name = ");
        scanf("%s",&Std[i].Name);

        printf("\n Enter Student Mobile No = ");
        scanf("%lld",&Std[i].Mob_No);

        printf("\n Enter Student Percentage = ");
        scanf("%f",&Std[i].Per);
    }

    _getch();
    system("cls");

    /// Display 1st Student Details
    printf("\n\n\t\t Student Details Are => \n");

    for(i = 0; i < 3; i++)
    {
        printf("\n\n %d Student Details Are => ", i + 1);

        printf("\n Student Roll No    = %d.",Std[i].Roll_No);
        printf("\n Student Name       = %s.",Std[i].Name);
        printf("\n Student Mobile     = %lld.",Std[i].Mob_No);
        printf("\n Student Percentage = %0.2f.",Std[i].Per);
    }
    _getch();
    return 0;

}
