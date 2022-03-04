#include<stdio.h>
#include<conio.h>
#define pi 3.14

float Area_Ellipse(float,float);

int main()
{
    float r1,r2;
    float Res;

    printf("\n Enter The Radius of Ellipse to Find its Area : ");
    scanf("%f%f",&r1,&r2);

    Res = Area_Ellipse(r1,r2);

    printf("\n Area of Given Ellipse is %.2f.",Res);

    getch();
    return 0;
}

float Area_Ellipse(float R1,float R2)
{
    float Area;

    Area = pi*R1*R2;

    return Area;
}
