//Write a C program to calculate the sum of odd numbers from 1 to n.

#include<stdio.h>

int main()
{
	int i=1;
	int n,sum=0;
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
		i++;
	}
	
	printf("%d\n",sum);
	
	return 0;
}
