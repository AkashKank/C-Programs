#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Count 2

struct Stud
{
  int Roll_No;
  char Name[60];
  long long int Mob_No;
  float Per;
};

int main()
{
    struct Stud Std[Count];
    int i = 0;

    ///Accept Student Details
    printf("\n Enter Student Details => ");

    for(i = 0; i < Count; i++)
    {
        printf("\n\n Enter Student No %d Details => ", i + 1 );

        Std[i].Roll_No = i+1;

        printf("\n Enter Student Name = ");
        scanf("%s",&Std[i].Name);

        printf("\n Enter Student Mobile No = ");
        scanf("%lld",&Std[i].Mob_No);

        printf("\n Enter Student Percentage = ");
        scanf("%f",&Std[i].Per);
    }

    _getch();
    system("cls");

    ///Display 1st Student Details
    printf("\n\n\t\t Student Details Entered are => \n");

    for(i = 0; i < Count; i++)
    {
        printf("\n\n %d Student Details Are => ", i + 1);

        printf("\n Student Roll No     = %d.",Std[i].Roll_No);
        printf("\n Student Name        = %s.",Std[i].Name);
        printf("\n Student Mobile      = %lld.",Std[i].Mob_No);
        printf("\n Student Percentage  = %0.2f.",Std[i].Per);
    }
    _getch();
    return 0;
}
