#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
	char data[100];
	fp = fopen("Filename.txt","w");
	
	if(fp==NULL)
	{
		printf("The file does not exist");
	}
	
	printf("Enter data :");
	scanf("%s",data);
	int n=strlen(data);
	int i=0;
	
	while(i<n)
	{
		fputs(data,fp);
		i++;
	}
	
	fclose(fp);
	return 0;
}
