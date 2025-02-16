#include<stdio.h>

struct conversion
{
	int day, month, year;
}bs, ad;

int main()
{
	printf("Enter day, month and year in BS:\n");
	scanf("%d%d%d", &bs.day, &bs.month, &bs.year );
	ad.day=bs.day-17;
	if(ad.day<=0)
	{
		ad.day=ad.day+30;
		bs.month=bs.month-1;
	}
	ad.month=bs.month-8;
	if(ad.month<=0)
	{
		ad.month=ad.month+12;
		bs.year=bs.year-1;
	}
	ad.year=bs.year-56;
	printf("The required day, month and year in Ad is %d, %d and %d", ad.day, ad.month, ad.year);
	return 0;
}
