#include<stdio.h>
#define MAX 100
void somaprod(int a,int b,int *soma,int *prod);

int main(void){
	int i,n,soma,prod;
	int a[MAX],b[MAX];
	int auxSoma,auxProd;
	scanf("%d", &n);
		while(n != 0)
		{
			soma = 0,prod =1;
			auxSoma =0;
			auxProd =0;			
			for(i=0;i<n;i++)
			{
				scanf("%d %d", &a[i],&b[i]);
				somaprod(a[i],b[i],&soma,&prod);
			}
			
			for(i=0;i<n;i++)
			{		
				if(a[i] > soma)
				 auxSoma++;
				 
				 if(b[i] > soma)
				 auxSoma++;
				 
				 if(a[i] > prod)
				 auxProd++;
				 
				 if(b[i] > prod)
				 auxProd++;
			}
			
			
			 printf("%d %d", auxSoma,auxProd);
			 
			//scanf("%d", &n);	
		}	
	return 0;	
}
void somaprod(int a,int b,int *soma,int *prod)
{
	*soma += a+b;
	*prod *= a * b;
}
