#include<stdio.h>
#define MAX 100
int busca_binaria(int n,int vetor[MAX],int x);

int main(void){
	int i,vezes;
	int n,x,j,vetor[MAX];
	scanf("%d", &vezes);
	for(i=0;i<vezes;i++)
	{
	  scanf("%d",&x);
	  scanf("%d",&n);	  
	  for(j=0;j<n;j++)
	  {
	     scanf("%d", &vetor[j]);		
	  }
	  
	  printf("%d\n",busca_binaria(n,vetor,x));	
	  	
	}	
	
	return 0;
}

int busca_binaria(int n,int vetor[MAX],int x)
{
	int esq = -1,dir = n,meio,aux = -1;
	
	while(esq < dir -1)
	{
	  meio = (esq+dir)/2;
	  
	  if(vetor[meio] < x)
	    esq = meio;
	  
	  else
	    dir = meio;	
	}
	
	if(x == vetor[dir])
	 return dir;
	
	else 
	 return aux;
	
}




