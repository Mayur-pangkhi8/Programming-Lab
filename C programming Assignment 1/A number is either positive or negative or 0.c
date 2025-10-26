#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	if(a>0){
		printf("a is a positive number",a);
	}
	else if(a<0){
		printf("a is a negative number",a);
	}
	else{
		printf("a is 0",a);
    }
    return 0;
}