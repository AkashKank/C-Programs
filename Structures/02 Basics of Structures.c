#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int Roll_No;
    char Name[80];
    char City[20];
    float Per;
};

int main()
{
    printf("\n Size of given Structure = %d",sizeof(struct student));

    getch();
    return 0;
}
