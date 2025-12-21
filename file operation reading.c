#include<stdio.h>

int main()
{
	FILE *fp;
	char data[100];
	fp = fopen("Filename.txt","r");
	
	if(fp==NULL)
	{
		printf("The file does not exist");
		return 1;
	}
	
	printf("Reading the file\n");
		while(fgets(data,100,fp)!=NULL)
		{
			printf("%s\n",data);
		}
	printf("Closing the file\n");
	
	fclose(fp);
	return 0;
}
