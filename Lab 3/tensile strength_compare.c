#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the first tensile strength:");
	scanf("%d",&a);
	printf("Enter the second tensile strength");
	scanf("%d",&b);
	if(a>b){
		printf("tensile strength of first material is larger %d \n",a);
		}
	else if(b>a){
		printf("tensile strength of second material is larger %d \n",b);
		}
	else{
		printf(" both have equal tensile strength");
		}
	return 0;
}

