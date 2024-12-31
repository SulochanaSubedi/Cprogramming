#include <stdio.h>
#include<conio.h>
int main()
{
    int i=0, x=0;
    for(i=1;i<10; i*=2)
    {
        ++x;
        printf("\tx=%d",x++);
    }
    printf("\n\ti=%d",i);
    getch();
    return 0;
}
