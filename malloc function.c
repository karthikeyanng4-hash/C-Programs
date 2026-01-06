#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i=0;
	int *arr;
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	arr = (int*)malloc(n*sizeof(int));
	
	if(arr==NULL)
	{
		printf("Memory not allocated");
		return 1;
	}
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d \t",arr[i]);
	}
	
	free(arr);
	return 0;
}
