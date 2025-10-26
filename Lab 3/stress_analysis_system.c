#include<stdio.h>
int main()
{
	float appliedstress,yieldstrength,fos;
	printf("Enter the appliedstress(Mpa):");
	scanf("%f",& appliedstress);
	printf("Enter the material yieldstrength(Mpa):");
	scanf("%f",& yieldstrength);
	fos=yieldstrength/appliedstress;
	printf("factor of safety(fos)=%f \n",fos);
	if(fos>=2.0){
		printf("design status:Safe Design");
	}
	else if(fos>=1.5 && fos<2.0){
		printf("Design Status:Acceptable with monitoring");
	}
	else if(fos <1.5){
		printf("Design Status: Danger - redesign needed");
	}
	return 0;
}
