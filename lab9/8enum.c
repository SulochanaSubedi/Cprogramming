#include<stdio.h>

int main()
{
	enum days{ Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
	};
	enum days weekday=Monday;
	printf("The week days are:\n");
	printf("Sunday=%d\n", Sunday);
	printf("Monday=%d\n", Monday);
	printf("Tuesday=%d\n", Tuesday);
	printf("Wednesday=%d\n", Wednesday);
	printf("Thursday=%d\n", Thursday);
	printf("Friday=%d\n", Friday);
	printf("Saturday=%d\n", Saturday);
	printf("Weekday=%d\n", weekday);
	return 0;
}

/*
Output:
Sunday=0
Monday=1
Tuesday=2
Wednesday=3
Thursday=4
Friday=5
Saturday=6
Weekday=1
*/
