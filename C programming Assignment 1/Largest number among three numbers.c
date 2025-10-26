#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter number 1:");
	scanf("%d",&a);
	printf("Enter number 2:");
	scanf("%d",&b);
	printf("Enter number 3:");
	scanf("%d",&c);
	if(a>b && a>c){
		printf("Number 1 is the greatest");
	}
	else if(b>a && b>c){
		printf("Number 2 is the greatest");
	}
	else if(c>a && c>b){
		printf("Number 3 is the greatest");
	}
    return 0;
}