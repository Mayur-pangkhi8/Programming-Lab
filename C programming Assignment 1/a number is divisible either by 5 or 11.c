#include<stdio.h>
int main()
{
	int n;
	printf("Enter integer(n):");
	scanf("%d",&n);
	if(n%5==0 && n%11==0){
		printf("%d is divisible by both 5 and 11",n);
	}
	else{
		printf("%d is divisible by neither 5 nor 11",n);
	}
	return 0;
}