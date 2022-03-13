#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{

    struct stud
    {
        int Roll_No = 0;
        char Name [60];
        long long int Mob_No;
        float per;
    };

    struct stud Std1,Std2;

    ///1st Student Details
    printf("\n Enter 1st Student Details =>");

    printf("\n Enter Student Roll NO = ");
    scanf("%d",&Std1.Roll_No);

    printf("\n Enter Student Name = ");
    scanf("%s",&Std1.Name);

    printf("\n Enter Student Mobile No = ");
    scanf("%lld",&Std1.Mob_No);

    printf("\n Enter Student Percentage = ");
    scanf("%f",&Std1.per);

    ///2nd Student DEtails
    printf("\n Enter 2st Student Details =>");

    printf("\n Enter Student Roll NO = ");
    scanf("%d",&Std2.Roll_No);

    printf("\n Enter Student Name = ");
    scanf("%s",&Std2.Name);

    printf("\n Enter Student Mobile No = ");
    scanf("%lld",&Std2.Mob_No);

    printf("\n Enter Student Percentage = ");
    scanf("%f",&Std2.per);

    _getch();
    system("cls");

    ///Display 1st Student Details
    printf("\n\n\t\t 1st Student Details Are => \n");

    printf("\n Student Roll No      = %d",Std1.Roll_No);
    printf("\n Student Name         = %s",Std1.Name);
    printf("\n Student Mobile       = %lld",Std1.Mob_No);
    printf("\n Student Percentage   = %f",Std1.per);

    ///Display 2nd Student Details
        printf("\n\n\t\t 2nd Student Details Are => \n");

    printf("\n Student Roll No      = %d",Std2.Roll_No);
    printf("\n Student Name         = %s",Std2.Name);
    printf("\n Student Mobile       = %lld",Std2.Mob_No);
    printf("\n Student Percentage   = %f",Std2.per);

    _getch();
    return 0;


}
