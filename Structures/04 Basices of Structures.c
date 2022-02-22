#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
   int Roll_No;
   char Name[60];
   char City[20];
   float Per;

   int No;
   char School[80];
   char Address[20];
   float Marks;
};

int main()
{
    struct student std1,std2;

    printf("\n Size of given Structure = %d",sizeof(std1,std2));

    getch();
    return 0;
}
