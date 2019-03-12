#include<stdio.h>
#define MAX 100


int main(void)
{
int n,i,j,v[MAX][MAX],soma[MAX],aux,cont[MAX];
	scanf("%d", &n);
	while(n !=0)
	{
		for(i=0;i<n;i++)
		   for(j=0;j<n;j++)	
		    scanf("%d", &v[i][j]);		
	  
	  
		  for(i=0;i<n;i++)		  	 
		     for(j=0;j<n;j++)
		       soma[j] = soma[j] + v[i][j];		 
		   
		for(i=0;i<n;i++)
		  for(j=i+1;j<n;j++)
		    if(soma[i] < soma[j])
		    {
		    	aux = soma[i];
		    	soma[i] = soma[j];
		    	soma[j] = aux;
		    	cont[i] = j;
		    	printf("%d", cont[i]);
		    }
		
		    
		    
		   
		   for(i=n-1;i >= 0;i--)
		    
		     printf("%d ", cont[i]);  
		     
		 printf("\n");
		    
	 	    
	 scanf("%d", &n);	    		
	}
}


