//Checking palindrome without using library function

#include<stdio.h>

int main()
{
  int i=0, lencount=0, count=0;
  char str[100];
  printf("Enter a word:\n");
  scanf("%s", str);
  while(str[i]!='\0')
  {
    lencount++;
    i++;
  }	
  for(i=0; i<lencount; i++)
  {
    if(str[i]==str[lencount-i-1])
    {
    	count++;
	}
  }
  if(lencount==count)
  printf("\nEntered string is palindrome.");
  else
  printf("\nEntered string is not palindrome.");
}
