#include<stdio.h>
#define MAX 100
void Remove(int n,int vetor[MAX]);

int main(void){
	int i,vezes;
	int n,x,j,vetor[MAX];
	scanf("%d", &vezes);
	for(i=0;i<vezes;i++)
	{
	  scanf("%d",&n);	  
	  for(j=0;j<n;j++)
	  {
	     scanf("%d", &vetor[j]);		
	  }
	  
	  Remove(n,vetor);
	  
	 /*funcao remove2 mais custoso	
	if (n == 1)
	    return vetor[0];
	
	else{
		aux = Remove(n-1,vetor);
		if (aux > vetor[n-1])
		{
		   Aux2 = i;
        		   aux = vetor [Aux2];
		   return aux;	
		}
	     	vetor[Aux2] = vetor [n-1];
		
	}
	
}
*/	
	  	
	}	
	
	return 0;
}
void Remove(int n,int vetor[MAX]){
	int aux,Aux2 = 0;
	int i;
	aux = vetor[0];
	
	for(i=0;i<n;i++)
	{
	
  	   if (aux > vetor[i])
	     {
        		Aux2 = i;
        		aux = vetor [Aux2];
	     }
	}

		      vetor[Aux2] = vetor [n-1];
 	printf("\n");
	for(i=0;i<n-1;i++)
	{
	  printf("%d ", vetor[i] );
	}
	
}
	

