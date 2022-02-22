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
    struct student std1,std2;

    std1.Roll_No = 65;
    strcpy(std1.Name,"Akash Kank");
    strcpy(std1.City,"Karad");
    std1.Per = 90.40;

    printf("\n Student Details is Given are = \n\n\t Roll_No = %d. \n\t Name = %s.\n\t City = %s.\n\t Percentage = %f.",std1.Roll_No,std1.Name,std1.City,std1.Per);

    getch();
    return 0;
}
