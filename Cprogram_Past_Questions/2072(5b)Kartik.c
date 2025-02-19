#include <stdio.h>
#include <string.h>

void conversion(char []);

int main()
{
    char str[30];
    printf("Enter the word:\n");
    scanf("%s", str);
    conversion(str);
    printf("Converted String is: %s", str);
    return 0;
}

void conversion(char str[])
{
    int length = strlen(str);
    int i;

    if (str[0] >= 'a' && str[0] <= 'z') 
	{
        for (i = 0; i < length; i++)
		 {
            if (str[i] >= 'a' && str[i] <= 'z') 
			{
                str[i] = str[i] - 32;
            }
        }
    } else if (str[0] >= 'A' && str[0] <= 'Z') 
	{
        for (i = 0; i < length; i++)
		 {
            if (str[i] >= 'A' && str[i] <= 'Z')
			 {
                str[i] = str[i] + 32;
            }
        }
    }
}

