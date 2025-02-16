#include<stdio.h>

int main()
{
	int temp, nums[100], n ,i ,j;
	printf("Enter how many numbers:\n");
	scanf("%d", &n);
	printf("Enter numbers:\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &nums[i]);
	}
    for(i=0;i<n-1; i++)
    {
    	for(j=i+1; j<n; j++)
    	{
    		if(nums[i]>nums[j])
    		{
    		temp=nums[i];
    		nums[i]=nums[j];
    		nums[j]=temp;
        	}
		}
	}
	printf("Ascending numbers:\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t", nums[i]);
	}
	return 0;
}
