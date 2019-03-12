#include<stdio.h>

int sequencia(int n);

int main(void){
	
	int i,vezes;
	int n;
	scanf("%d", &vezes);
	
	for(i=0;i<vezes;i++)
	{	  
	 scanf("%d", &n);
	 printf("\n%d\n", sequencia(n));		  	
	
	}	
	return 0;
}

int sequencia(int n)
{
	static int i=1;
	int aux;	
	if (n == 1)
	{	 
	 printf("%d ",n);
	 aux = i;
	 i=1;
	 return aux;		
	}
	  	
	else
	   
	   if (n%2 == 0)
	   {
	   	printf("%d ", n);
	   	i++;
	   	n = sequencia(n/2);	  	   	
	   }
	   else
	   {
	   	printf("%d ", n);
	   	i++;
	   	n = sequencia(n*3+1);
	   }   		
	
}
