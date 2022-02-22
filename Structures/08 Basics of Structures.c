#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int Roll_No;
    char Name[80];
    char City[20];
    float Per;
}obj = {39,"Akash Kank","Karad",90.40};

int main()
{
    printf("\n Student Details are Given = \n\n\t Roll_No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.2f\n\n",obj.Roll_No,obj.Name,obj.City,obj.Per);

    getch();

    strcpy(obj.City,"Banpuri");
    obj.Per = 96.50;

    printf("\n Student Details are Given = \n\n\t Roll_No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.2f\n\n",obj.Roll_No,obj.Name,obj.City,obj.Per);

    getch();
    return 0;
}
