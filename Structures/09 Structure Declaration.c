#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    struct stud
    {
        char City[40];
        char Name[80];
        int Roll_No;
        int Phy;
        int Maths;
        int Chem;
    };

    int Num = 0;
    struct stud Std1;

    printf("\n Size Of Integer = %d",sizeof(int));

    printf("\n Size Of Integer Variable = %d",sizeof(Num));

    printf("\n Size Of Student Structure = %d",sizeof(struct stud));

    printf("\n Size Of Student Structure Object = %d",sizeof(Std1));

    _getch();
    return 0;
}
