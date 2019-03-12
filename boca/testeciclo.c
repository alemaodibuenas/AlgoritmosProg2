#include<stdio.h>

int sequencia(int n);

int main(void){
	
	int i,vezes;
	int n;
	  
	 scanf("%d", &n);
	 sequencia(n);		
		
	return 0;
}

int sequencia(int n)
{
	
	if (n == 1)
	{	 
	 return n;		
	}
	  	
	else
	{	   
	   if (n % 2 == 0)
	   {
	   	n = sequencia(n/2);
		printf("%d", n);
	   }
	   else
	   {
	   	n = sequencia(n*3+1);
	   	printf("%d", n);
	   }   		
	
	}
}
