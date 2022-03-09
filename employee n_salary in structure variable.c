#include<stdio.h>
struct employee
 {
	int id;
	char name[20];
	int g_salary;
	float ht;
	float tt;
	float da;
	float pf;
	float n_salary;
};
void main()
{
	int n,i;
	printf("enter how many employee datav to be stored?:");
	scanf("%d",&n);
	struct employee e1[n];
	for(i=0;i<n;i++)
	{
		printf("ID:");
		scanf("%d",&e1[i].id);
		printf("\nNAME:");
		scanf("%s",e1[i].name);
		printf("\nG_SALARY:");
		scanf("%d",&e1[i].g_salary);
		e1[i].ht=(0.02)*(e1[i].g_salary);
		e1[i].tt=(0.015)*(e1[i].g_salary);
		e1[i].da=(0.015)*(e1[i].g_salary);
		e1[i].pf=(0.4)*(e1[i].g_salary);
		e1[i].n_salary=(e1[i].g_salary+e1[i].ht+e1[i].tt+e1[i].da-e1[i].pf);
		printf("\n");
	}
	printf("\nID\tNAME\tG_SALARY\tHT\tTT\tDA\tPF\tN_SALARY\n");
	printf("---------------------------------------------------------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%d\t\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",e1[i].id,e1[i].name,e1[i].g_salary,e1[i].ht,e1[i].tt,e1[i].da,e1[i].pf,e1[i].n_salary);
	}
	
}
