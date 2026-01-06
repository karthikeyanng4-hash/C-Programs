#include<stdio.h>
int main()
{
	char s1[100];
	int length=0,i;
	
	printf("Enter the string to be reversed :");
	scanf("%s",s1);
	
	while(s1[length]!='\0')
	{
		length++;
	}
	
	printf("Reversed string :");
	
	for(i=length-1;i>=0;i--)
	{
		printf("%c",s1[i]);
	}
	
	return 0;
}
