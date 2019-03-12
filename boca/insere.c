#include<stdio.h>
#define MAX 100
void Insere(int n,int vetor[MAX],int x);

int main(void){
	int i,vezes;
	int n,x,j,vetor[MAX];
	scanf("%d", &vezes);
	for(i=0;i<vezes;i++)
	{
	  scanf("%d",&x);//numero a ser inserido
	  scanf("%d",&n);//n elementos do vetor	  
	  for(j=0;j<=n;j++)
	  {
	     scanf("%d", &vetor[j]);
	     if(j == n)
	     {
	       vetor[j] = x;
	       
	     }
	       		
	  }
	  printf("%d", n);
	  Insere(n,vetor,x);	
	  	
	}	
	
	return 0;
}

void Insere(int n,int vetor[MAX],int x)
{
	int i,j,aux;

	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(vetor[i] > vetor[j])
			{
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;	
				
			}
						
		}
	}
	
	
	
	for(i=0;i<n+1;i++)
	      printf("%d ", vetor[i]);		
	  
	
}
