#include<stdio.h>
#include<conio.h>

#define pi 3.14

float Area_Circle(float);

int main()
{
    float r;
    float Res;

    printf("\n Enter The Measures of Circle to Find its Area : ");
    scanf("%f",&r);

    Res = Area_Circle(r);

    printf("\n Area of Given Circle is %.2f.",Res);

    getch();
    return 0;
}

float Area_Circle(float Radius)
{
    float Area;

    Area = pi*Radius*Radius;

    return Area;
}
