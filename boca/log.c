#include<stdio.h>

int log(int n);

int main(void){
	int i,vezes;
	int n,x;
	scanf("%d", &vezes);
	for(i=0;i<vezes;i++)
	{
	  scanf("%d",&n);	
	  printf("%d\n",log(n));	
	}	
	
	return 0;
}

int log(int n){
	static int i=0;
	int aux;
	if(n == 1)
	{
	   aux = i;
	   i = 0;
	   return aux;	
	}	   
	   
	   else
	     i++;	     
	     n = log(n/2);
}
