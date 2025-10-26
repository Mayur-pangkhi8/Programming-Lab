#include<stdio.h>
int main()
{
	int temp;
	printf("Enter the temperature in celcius");
	scanf("%d",&temp);
	if(temp>=60 && temp<=80){
	printf("\n safe range");
    }
	else
	{
	printf("\n warning");
    }
	return 0;
}