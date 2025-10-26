#include<stdio.h>
int main()
{
	int mass,velocity,kineticenergy;
	printf("Enter the value of mass:");
	scanf("%d",&mass);
	printf("Enter the value of velocity:");
	scanf("%d",&velocity);
	kineticenergy=(mass*velocity*velocity)/2;
	printf("the value of the kineticenergy:%d",kineticenergy);
	return 0;
}