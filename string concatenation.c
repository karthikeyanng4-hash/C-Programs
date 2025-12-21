#include<stdio.h>

int main()
{
	char s1[100],s2[100];
	
	printf("Enter two strings :");
	scanf("%s%s",s1,s2);
	
	int i=0,j=0;
	
	while(s1[i]!='\0')
	{
		i++;
	}
	
	while(s2[j]!='\0')
	{
		s1[i++]=s2[j];
		j++;
	}
	s1[i]='\0';
	
	printf("Strings after concatenation %s",s1);
	
	return 0;
}
