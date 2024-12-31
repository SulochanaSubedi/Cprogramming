#include <stdio.h>
#include<conio.h>
int main()
{
    int i, x=0;
    for(i=1;i<10; i++)
    {
        if(i%2==0)
        continue;
        ++x;
        printf("\tx=%d",x++);
    }
    printf("\n\ti=%d",i);
    getch();
    return 0;
}
