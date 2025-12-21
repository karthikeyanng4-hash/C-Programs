//Write a C program to calculate the sum of odd numbers from 1 to n.

#include<stdio.h>

int main()
{
	int i=1;
	int n;
	printf("Enter the value of n");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}
	
	return 0;
}
