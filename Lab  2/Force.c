#include<stdio.h>
int main()
{
	int force,mass,acceleration;
	printf("Enter tha value of mass:");
	scanf("%d",&mass);
	printf("Enter the value of acceleration:");
	scanf("%d",& acceleration);
	force=mass*acceleration;
	printf( "The value of force : %d",force);
	return 0;
}