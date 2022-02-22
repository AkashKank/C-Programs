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
    struct student std1 = {21,"Akash","Banpuri",90.40};

    struct student std2;

    struct student std3;

    printf("\n Student Details are Given = \n\n\t Roll_No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.2f\n",std1.Roll_No,std1.Name,std1.City,std1.Per);
    printf("\n*******************************************************************************************");

    getch();

    strcpy(std1.Name,"Chaitanya Khairmode");
    strcpy(std1.City,"Aundh");

    std2.Roll_No = 58;
    strcpy(std2.Name,"Abhi Yadav");
    strcpy(std2.City,"Karad");
    std2.Per = 96.50;

    std3 = std2;

    printf("\n Student Details are Given = \n\n\t Roll_No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.2f\n",std1.Roll_No,std1.Name,std1.City,std1.Per);

    printf("\n Student Details are Given = \n\n\t Roll_No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.2f\n",std2.Roll_No,std2.Name,std2.City,std2.Per);

    printf("\n Student Details are Given = \n\n\t Roll_No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.2f\n",std3.Roll_No,std3.Name,std3.City,std3.Per);

    getch();
    return 0;
}
