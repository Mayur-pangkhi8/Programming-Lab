#include<stdio.h>
int main()
{
	int n,sum;
	printf("Enter number(n):");
	scanf("%d",&n);
	sum=n*(n+1)/2;
	printf("the sum of n natural number is %d",sum);
	return 0;
}