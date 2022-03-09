#include<stdio.h>
#include<conio.h>

float Degree(float);

int main()
{
    float Fahrenheit = 0, Res = 0;
    printf("\n Enter a Temperature in Fahrenheit to Convert it into Degree : ");
    scanf("%f",&Fahrenheit);

    Res = Degree(Fahrenheit);

    printf("\n Temperature in Degree is %2.f",Res);

    getch();
    return 0;
}

float Degree(float Fahren)
{
    float Degree = 0;
    Degree=(5.0/9.0)*(Fahren-32.0);

    return Degree;
}

