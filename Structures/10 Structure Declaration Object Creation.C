#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    struct Stud
    {
       int Roll_No = 0;
       long long int Mob;
       float Income;
    };

    struct Stud Std1;

    Std1.Roll_No = 40;
    Std1.Mob = 8554880737;
    Std1.Income = 50000;

    _getch();
    system("cls");

    printf("\n 1st Student Roll No = %d",Std1.Roll_No);
    printf("\n 1st Student Mobile = %lld",Std1.Mob);
    printf("\n 1st Student Income = %0.2f",Std1.Income);

    _getch();
    return 0;

}
