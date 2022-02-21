#include<stdio.h>
#include<conio.h>

struct student
{
    int Roll_No;
    char Name[80];
    char City[20];
    float Per;
};

int main()
{
    struct student std1,std2;

    printf("\n Size of given Structure = %d",sizeof(std1));

    getch();
    return 0;
}
