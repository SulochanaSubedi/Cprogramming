// Demonstrate the differences among getch(), getche(), getchar(). Demonstrate the difference between scanf() & gets(), printf() & puts().

#include<stdio.h>
#include<conio.h>

int main()
{
	char c, ch1, ch2, ch3;
	printf("Enter a charcater:\n"); //It is unechoed and unbuffered.
	ch1=getch();
	printf("%c", ch1);
	printf("\nEnter a character:\n"); //It is echoed and unbuffered.
	ch2=getche();
	printf("%c", ch2);
	printf("\nEnter a character:\n"); //It is echoed and buffered.
	ch3=getchar();
	printf("%c", ch3);
	return 0;
}
