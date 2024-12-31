#include<stdio.h>
#include<conio.h>
int main()
{
	float balance;
	char sex;
	printf("\n Old balance");
	scanf("%f",&balance);
	printf("Enter gender of the account holder");
	scanf("%c",&sex);
	if(sex==f)
	{
		if(balance>5000)
		 balance=balance+0.5*balance;
		else
		 balance=balance+0.2*balance;
	}
	else
	 balance=balance+0.2*balance;
	printf("\n The balance after bonus is \t %f",balance);
	getch();
	return 0;
}
