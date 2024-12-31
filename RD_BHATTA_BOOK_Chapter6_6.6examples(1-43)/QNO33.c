#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,r,sum=0;
    int n;
    printf("Enter the first number of GP series:");
    scanf("%f", &a);
    printf("\nEnter the total no in GP series");
    scanf("%d",&n);
    printf("\nEnter the common ratio of GP series");
    scanf("%f",&r);
    sum=(a*(1-pow(r,n+1)))/(1-r);
    printf("\n Sum of the GP: %.2f", sum);
    getch();
    return 0;
}
