#include <conio.h>
#include <stdio.h>
#define n 5
int main()
{
    int i = n, j, k;
    while (i > 0)
    {
        j = 0;
        while (j < i)
        {
            printf("c\t");
            j++;
        }
        printf("\n\t");
        k = 0;
        while (k < (n - i))
        {
            printf("\t");
            k++;
        }
        i--;
    }
    getch();
    return 0;
}
