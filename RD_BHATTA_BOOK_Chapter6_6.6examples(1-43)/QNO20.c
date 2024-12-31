//qn 20
//WAP to check whether the entered character is vowel or not (using switch case)

#include <stdio.h>
#include<conio.h>

int main()
{
char ch;
printf("Enter a character:");
scanf("%c",&ch);
switch(toupper(ch))
{   case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("\n The character \'%c\' is a Vowel",ch);
        break;
        default:
        printf("\n \'%c\' is not a vowel",ch);
}
getch();
return 0;
}
