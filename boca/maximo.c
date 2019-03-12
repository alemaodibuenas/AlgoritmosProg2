#include<stdio.h>
#define MAX 100

void maiores(int n, int v[MAX], int* max, int* min);
int main()
{
	int n,vezes,i,j,v[MAX];
	int *min,*max;
	
	scanf("%d", &vezes);	
	for(i=0;i<vezes;i++)
	{
		scanf("%d", &n);		
		for(j=0;j<n;j++)
		{
			scanf("%d", &v[j]);
		}		
		minmax(n-1,v,&max,&min);
	}		
	return 0;
}

void minmax(int n, int v[MAX], int* max, int* min)
{
	*max = *v ;
	*min = v[n-1];
	int *p;	
	for(p=v+n;p>=v;p--)
	{
		if(*max <= *p )
		{
		 *min = *max;
		 *max = *p;	
		}				 
		else		  
		   if(*min <= *p)
		     *min = *p;	
		  	 	  
	}              	    
	printf("%d %d",*min,*max);
	printf("\n");
}

