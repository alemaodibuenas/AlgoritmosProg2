#include<stdio.h>

#define MAX 100

int separa(int p,int r,int v[MAX]);
void quicksort(int p,int r,int v[MAX]);
void imprimir(int n,int v[MAX]);
int main(void)
{
	int n,q,i,v[MAX];
	scanf("%d", &q);
	while(q !=0)
	{
		scanf("%d", &n);
		for(i=0;i<n;i++)
		{
		    scanf("%d", &v[i]);	
		}
	  
	 quicksort(0, n -1, v);
	 
	 imprimi(n,v);	  	    
	 q--;	    		
	}	
	
	return 0;
}

int separa(int p,int r,int v[MAX])
{
	int x,i,j;
	
	x=v[p];
	i = p -1;
	j = r + 1;
	while(1){
		do
		{
		 j--;
		}while (v[j] > x);
		do
		{
		 i++;
		}while (v[i] < x);
		
		if(i<j)
		{
		 troca(&v[i],&v[j]);	
		}
		
		
	        else
	            return j;
	}
}

void troca(int *a,int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void quicksort(int p,int r,int v[MAX])
{
	int q;
	if(p<r)
	{
	  q = separa(p,r,v);
	  quicksort(p,q,v);
	  quicksort(q+1,r,v);	
	}
}

void imprimi(int n,int v[MAX])
{
	int i;
	for(i=0;i<n;i++) 
	   printf("%d ", v[i]);
	   
	printf("\n");   
}
