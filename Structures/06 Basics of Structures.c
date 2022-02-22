#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    int Roll_NO;
    char Name[80];
    char City[20];
    float Per;
};

int main()
{
    struct student std1 = {21,"Akash","Banpuri",90.40};

    struct student std2 = {};;

    printf("\n Student Details are Given = \n\n\t Roll_No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.2f.\n",std1.Roll_NO,std1.Name,std1.City,std1.Per);
    printf("\n *********************************************************************************************************************");

    getch();

    strcpy(std1.Name,"Chaitanya Khairmode");
    strcpy(std1.City,"Karad");

    std2.Roll_NO = 50;
    strcpy(std2.Name,"Sanika Kank");
    strcpy(std2.City,"Dhebewadi");
    std2.Per = 87.60;

     printf("\n Student Details are Given = \n\n\t Roll_No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.2f.\n",std1.Roll_NO,std1.Name,std1.City,std1.Per);


    printf("\n Student Details are Given = \n\n\t Roll_No - %d.\n\t Name - %s.\n\t City - %s.\n\t Percentage - %0.2f.\n\n\n",std2.Roll_NO,std2.Name,std2.City,std2.Per);

    getch();
    return 0;
}
