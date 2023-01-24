#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the even numbers till:");
	scanf("%d",&n);
	printf("even numbers 1 to %d are");
	for(i=1;i<n;i++)
	{
		if(i%2==0)
	{
		printf("%d\n",i);
	}
	}
	return 0;
	
}
