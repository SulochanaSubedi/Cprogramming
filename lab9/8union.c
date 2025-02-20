#include<stdio.h>

int main()
{
	union student
	{
		int roll;
		float marks;
	};
	union student st;
	st.roll=455;
	printf("\nRoll=%d", st.roll);
	st.marks=78;
	printf("\nMarks=%f", st.marks);
	return 0;
}

/*
Output:
Roll=455
Marks=78.000000
*/
