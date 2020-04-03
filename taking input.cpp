#include<stdio.h>
int main()
{
	int max,at[max],bt[max],wt[max],tat[max],tq,p[max],pr[max],i,j,temp;
	float awt=0,atat=0;
	printf("\nEnter Total Number of Processes:"); 
	scanf("%d", &max); 
	for(i=0;i<max;i++)
	{p[i]=i+1;
	 pr[i]=0;
	 printf("\nEnter total Details of Process[%d]\n", i + 1);
        printf("Arrival Time:\t");
        scanf("%d", &at[i]);
        printf("Burst Time:\t");
        scanf("%d", &bt[i]); 
        printf("Priority:\t");
        scanf("%d", &pr[i]);
	}
	printf("\nEnter the Time Quantum:"); 
    scanf("%d", &tq); 
    
}
