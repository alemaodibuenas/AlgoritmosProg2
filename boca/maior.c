#include<stdio.h>
#define MAX 100

void maiores(int n, int v[MAX], int* maior, int* maior2);
int main()
{
	int n,vezes,i,j,v[MAX];
	int *maior,*maior2;
	
	scanf("%d", &vezes);	
	for(i=0;i<vezes;i++)
	{
		scanf("%d", &n);		
		for(j=0;j<n;j++)
		{
			scanf("%d", &v[j]);
		}		
		minmax(n,v,&maior,&maior2);
	}		
	return 0;
}

void minmax(int n, int v[MAX], int* maior, int* maior2)
{
	maior = maior2 = v+n;
	int p = n;	
	while(n--)
	{
		if(*maior2 <= v[n] )
		{
		 *maior2 = *maior;
		 *maior = v[n];
		 		 	
		}		
		 
		else
		if(*maior < v[n])		   
		   *maior2 = v[n];
		  	 	  
	}              	    
	printf("%d %d",*maior,*maior2);
	printf("\n");
}

