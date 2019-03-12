#include<stdio.h>
#define MAX 1000
void ordenar(int n, int v[MAX]);
void troca(int *a,int *b);

int main(void)
{
	int i,x,v; //indices
	int m,n;
	int vetor[MAX]; //vetor das notas
	scanf("%d", &v);//armazenar n vezes
	
	for(x=0;x<v;x++)
	{//N vezes o programa vai rodar
		scanf("%d", &n);
		for(i=0;i<n;i++)
		{
		   scanf("%d", &vetor[i]);
		}
		ordenar(n,vetor);		
	}
   return 0;
}

 void ordenar(int n,int vetor[MAX])
 {
 	int i,j,min,cont=0;
	for(i=0;i<n-1;i++)
	{
	   min =i;
	    for(j=i+1;j<n;j++)
	    {
	      if(vetor[j] < vetor[min])
	      {
	       min = j;
	       troca(&vetor[i], &vetor[min]);
	       cont++;
	      }
	    }
	} 
	//for(i=0;i<n;i++){
		printf("%d ", cont);
	//}
		
 }
 
 void troca(int *a,int *b)
 {
 	int aux;
 	aux = *b;
 	*b = *a;
 	*a = aux;
 }

