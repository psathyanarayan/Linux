#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,ct[10],tat[10],wt[10];
	int p[] = {1,2,3,4};
	int at[] = {0,0,0,0};
	int bt[] = {6,8,1,3};
	int sum =0,sw=0,st=0;
	int n=4;
	for(i=0;i<n;i++)
	{
		sum+=bt[i];
		ct[i] = bt[i] + sum;
	}
	for(i=0;i<n;i++)
	{
		tat[i] = ct[i] - at[i];
		st+=tat[i];
	}
	for(i=0;i<n;i++)
	{
		wt[i] = tat[i] - bt[i];
		sw+=wt[i];
	}
	for(i=0;i<n;i++)
	{
		printf(" %d ",ct[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",tat[i]);
	}
	printf("Waiting Time = %d \n Turn Around Time = %d \n",sw/n,st/n);
	
	
	
}
