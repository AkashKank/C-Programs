#include<stdio.h>
#include<conio.h>

float Area_Rectangle(float,float);

int main()
{
    float No1,No2;
    float Res;

    printf("\n Enter The Measures of Circle to Find its Area : ");
    scanf("%f%f",&No1,&No2);

    Res = Area_Rectangle(No1,No2);

    printf("\n Area of Given Rectangle is %.2f.",Res);

    getch();
    return 0;
}

float Area_Rectangle(float length,float breadth)
{
    return length*breadth;
}
