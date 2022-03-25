#include<stdio.h>
#include<conio.h>

int main()
{
    char src[20]="";
    int i=0;

    printf("\nEnter any string : ");
    gets(src);


    while(src[i] != '\0')
    {
        i++;
    }

    printf("\nLength of given string is %d",i);

    getch();
    return 0;

}
