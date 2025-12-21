#include<stdio.h>

int main()
{
	int original,n,reverse=0,rem;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	original=n;
	
	while(n!=0)
	{
		rem=n%10;
		reverse = reverse*10 + rem;
		n/=10; 
	}
	
	if(original==reverse){
		printf("The Number is a palindrome");
	}
	else{
		printf("The Number is not a palindrome");
	}
	
	return 0;
}
