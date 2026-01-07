#include<stdio.h>
int main()
{
	int n,i,flag=0;
	
	printf("Enter the value of N :");
	scanf("%d",&n);
	
	if(n==0||n==1)
	{
		flag = 1;
	}
	
	for(i=2; i<=n/2 ;i++)
	{
		if(n%i==0)
		{
			flag = 1;
			break;
		}
	}
	
	if(flag==1)
	{
		printf("It is a composite number");
	}
	else
	{
		printf("It is prime number");
	}
	
	return 0;
}
