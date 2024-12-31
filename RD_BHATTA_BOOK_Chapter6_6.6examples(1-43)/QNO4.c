#include<stdio.h>
#include<conio.h>
int main()
{
	float billamount, units;
	printf("Enter electricity units");
	scanf("&f",&units);
	if(units<=20)
	 billamount=80;
	else if(units>20 && units<=120)
	 billamount=(80.0+7.30)*(units-20);
	else
	 billamount=9*units;
	printf("Bill amount is %.2f",billamount);
	getch();
	return 0;
}
