#include<stdio.h>

int main()
{
	FILE *f1 ,*f2, *f3;
	f1=fopen("number.txt", "w");
	int i, n, num[100];
	printf("Enter how many numbers:\n");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &num[i]);
		fprintf(f1, "%d\t", num[i]);
	}
	fclose(f1);
	f1=fopen("number.txt", "r");
	f2=fopen("odd.txt", "w");
	f3=fopen("even.txt", "w");
	while(fscanf(f1, "%d", &num[i])!=EOF)
	{
		if(num[i]%2!=0)
		fprintf(f2, "%d\t", num[i]);
		else
		fprintf(f3, "%d\t", num[i]);
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	f2=fopen("odd.txt", "r");
	while(fscanf(f2, "%d", &num[i])!=EOF)
	{
		printf("%d\t", num[i]);
	}
	fclose(f2);
	f3=fopen("even.txt", "r");
	while(fscanf(f3, "%d", &num[i])!=EOF)
	{
		printf("%d\t", num[i]);
	}
	fclose(f3);
	
	return 0;
}
