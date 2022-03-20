#include<stdio.h>
#include<conio.h>

int strlenX(char *src)
{
    int Len = 0;

    while(*src != '\0')
    {
        Len++;
        src++;
    }
    return Len;
}

int main()
{
    char Name[20] = {'[]','a','r','r','y','\0'};
    char City[10] = "PUNE";
    char Course[] = "BCS Entire";
    char College[60];

    printf("\n Enter Your College Name = ");
    gets(College);

    _getch();

    printf("\n\n Length Of College Name String = %d.",strlenX(College));

    printf("\n\n Length Of Name String = %d.", strlenX(Name));
    printf("\n\n Length Of City String = %d.", strlenX(City));
    printf("\n\n Length Of Course String = %d.", strlenX(Course));

    _getch();
    return 0;
}
