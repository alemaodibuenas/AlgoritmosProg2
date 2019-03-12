#include<stdio.h>

#define MAX 100

void soma_prod(int a, int b,int *soma, int *prod);


int main()
{
	int n,vezes,i,j,v[MAX];
	int *max;
	scanf("%d", &n);
	while(n != 0)
	{
		for(i=0;i<n;i++)
		{		
			scanf("%d", &v[j]);					
		}
		soma_prod2(n,v);		
	}
	
		
	
	return 0;
}

void soma_prod(int a, int b,int *soma, int *prod)
{	
	*soma = a+b;
	*prod = a*b;
}

void soma_prod2(int n,int v[MAX])
{
	
	int i,soma=0,prod=1;
	int *s1,*p1;
	for(i=0;i<n;i++)
	{
		soma = v[i] + v[i+1];
		prod = v[i] * v[i+1];		
		
	}
	
	printf("\n");
	printf("%d %d", soma,prod);
	
}



