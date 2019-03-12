#include<stdio.h>

int potencia(int x,int n);

int main(void){
	int i,vezes;
	int n,x;
	scanf("%d", &vezes);
	for(i=0;i<vezes;i++)
	{
	  scanf("%d %d", &x,&n);	
	  printf("%d\n",potencia(x,n));	
	}	
	
	return 0;
}

int potencia(int x,int n){
	int pot;
	if(n == 0)
	   return 1;
	   
	   else
	     pot = x * potencia(x,n-1);
	     return pot;	
}
