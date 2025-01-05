#include<stdlib.h>
#include<string.h>
#include<malloc.h>

int main()
{
	char name[100];
	char *desc;
	strcpy(name, "Anada Kafle");
	
	desc=malloc(40* sizeof(char));
	if(desc==NULL)
	{
		printf("Unable to allocate memory\n");
	}
	else
	{
		strcpy(desc, "Ananda is a Bachelor of Engg. Student");
	}
	desc=realloc(desc, 100* sizeof(char));
	if(desc==NULL)
	{
		printf("\nUnable to allocate memory");
	}
	else
	{
		strcat(desc, " He is a good student");
	}
	printf("Name=%s\n", name);
	printf("Description: %s\n", desc);
	free(desc);
}


