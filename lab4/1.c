#include<stdio.h>

int main()
{
	float mop, moc, mom, moe, mob, total, percentage;
	printf("Enter marks of physics, chemistry, math, english, biology:\n ");
	scanf("%f%f%f%f%f",&mop, &moc, &mom, &moe, &mob);
    total=mop+moc+mom+moe+mob;
    percentage=(mop+moc+mom+moe+mob)/5;
    printf("The total marks: %.2f\n",total);
    printf("The percentage: %.2f\n", percentage);
    if(percentage<40)
    {
    	printf("The rank is categorized as fail");
	}
	else if(percentage>40&&percentage<55)
	{
		printf("The rank is categorized as pass and third");
	}
	else if(percentage>55&&percentage<65)
	{
		printf("The rank is categorized as second");
	}
	else if(percentage>65&&percentage<80)
	{
		printf("The rank is categorized as first");
	}
	else if(percentage>80&&percentage<95)
	{
		printf("The rank is categorized as distinction");
	}
	else
	{
		printf("The rank is categorized as extra ordinary");
	}
	return 0;
}
