#include<stdio.h>

#define MAX 100

void minmax(int n, int v[MAX], int* max, int* min);


int main()
{
	int n,vezes,i,j,v[MAX];
	int *max,*min;
	scanf("%d", &vezes);
	
	for(i=0;i<vezes;i++)
	{
		scanf("%d", &n);		
		for(j=0;j<n;j++)
		{
			scanf("%d", &v[j]);
		}		
		minmax(n,v,&max,&min);

	}	
	
	return 0;
}

void minmax(int n, int v[MAX], int* max, int* min)
{
	*max = *min = v[0];
	int i;
	
	for(i=0;i<n;i++)
	{
		if(*max < v[i] )
		 *max = v[i];
		 
		if(*min > v[i])
		 *min = v[i]; 
	}
	
	printf("%d %d",*min,*max);
	printf("\n"); 
	
	
}

