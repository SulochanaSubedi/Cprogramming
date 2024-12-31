//qn 19
/** WAP that reads a character and perform following operations:
1. Display "It is vowel" if entered character is vowel otherwise "it is constant"
2. Display "It is digit" if entered character is member of digit, otherwise display the ASCII value of entered character **/

#include<stdio.h>
#include<conio.h>

int main()
{
char choice, ch;
printf("Enter your choice:\n1. for vowel/consonant\n2.for digit or non digit\n");
choice=getchar();
fflush(stdin);
printf("\nEnter your character to be tested:");
ch=getchar();
switch(choice)
{   case '1':
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' )
    {printf("\nThe input character %c is vowel",ch);}
    else
    {printf("\nThe input character %c is consonant",ch);}
break;
case '2':
    if (ch>=48&&ch<=57)
    {printf("\nThe input character %c is digit.",ch);}
    else
    {printf("\nThe input character %c is not digit. It's ASCII value is %d",ch,ch);}
    break;
    default:
    printf("\nInvalid Choice");


}
getch();
return 0;
}
