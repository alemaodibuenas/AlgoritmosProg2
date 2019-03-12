#include<stdio.h>

int soma_digitos(int n);

int main(void){
	int i,vezes;
	int n,x;
	scanf("%d", &vezes);
	for(i=0;i<vezes;i++)
	{
	  scanf("%d",&n);	
	  printf("%d\n",soma_digitos(n));	
	}	
	
	return 0;
}

int soma_digitos(int n){
	int ultimo_digito;
	if(n <= 9)
	   return n;
	   
	   else
	     ultimo_digito = n%10;
	     n = soma_digitos(n/10);
	     return n+ultimo_digito;	
}
