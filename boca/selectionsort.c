/*Entrada: A entrada é composta de vários conjuntos de teste e a primeira linha contém
um inteiro k(1  k  100) que indica o número de casos de testes. A primeira linha de
um conjunto de teste contém um número inteiro positivo n(1  n  100) que indica o
tamanho do vetor. Em seguida são apresentados os n elementos do vetor.
3
4
4 5 3 1
10
9 8 7 6 1 4 3 2 12 10
6
3 10 8 27 55 7*/

#include<stdio.h>
#define MAX 100

void selecao(int n,int v[MAX]);
void troca(int *a, int *b);

int main(void)
{
  int vezes,x,n,v[MAX],i;
  char nome[20];
  
  scanf("%d", &vezes);
  for(x=0;x<vezes;x++)
  {
  	scanf("%d", &n);
  	for(i=0;i<n;i++)
  	{
  	  scanf("%d", &v[i]);	
               }
  	selecao( n, v);
  }  
  	
  return 0;	
}



void selecao(int n,int v[MAX])
{
  int i,j,min;
  
  for(i=0;i<n-1;i++)
  {
   min =i;
   for(j=i+1;j<n;j++)
   {
     if(v[j] < v[min]) 
     {
       min = j;               
       troca(&v[i], &v[min]);	
     }      
     else 
       min =i;    	
   }   	
  }
  
  for(i=0;i<n;i++)
  {
    printf("%d ", v[i]);  	
  }
  printf("\n");	
}

void troca(int *a, int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}
