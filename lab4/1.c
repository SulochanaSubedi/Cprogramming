// Write a program to input marks of 5 subjects (Physics, Chemistry, Math, English & Biology) for a student. Display the rank of each subjects and also the result of total marks and percentage obtained with his/her rank in the class. The rank is categorized as fail (marks < 40%), pass & third division (marks between 40 to 55%), second (marks between 55 to 65%), first (marks between 65 to 80%), Distinction (marks between 80 to 95%), extra ordinary (marks above 95 to 100%). 

#include<stdio.h>

int main()
{
	float mop, moc, mom, moe, mob, total, percentage;
	printf("Enter marks of physics, chemistry, math, english, biology:\n ");
	scanf("%f%f%f%f%f",&mop, &moc, &mom, &moe, &mob);
    total=mop+moc+mom+moe+mob;
    percentage=total/5;
    printf("The total marks: %.2f\n",total);
    printf("The percentage: %.2f\n", percentage);
    if(percentage<40)
    {
    	printf("The rank is categorized as fail");
	}
	else if(percentage>=40&&percentage<=55)
	{
		printf("The rank is categorized as pass and third");
	}
	else if(percentage>55&&percentage<=65)
	{
		printf("The rank is categorized as second");
	}
	else if(percentage>65&&percentage<=80)
	{
		printf("The rank is categorized as first");
	}
	else if(percentage>80&&percentage<=95)
	{
		printf("The rank is categorized as distinction");
	}
	else
	{
		printf("The rank is categorized as extra ordinary");
	}
	return 0;
}
