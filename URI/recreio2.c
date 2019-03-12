#include<stdio.h>
#define MAX 1000
int escreve_vetor(int n, int v[MAX]);
int main(void){

int i,vetor[MAX],n,m,v[MAX];

scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &m);
		vetor[i] = escreve_vetor(m,v);
	}
	
	for(i =0;i<n;i++)
	{
		printf("%d\n", vetor[i]);
	}

return 0;
}

int escreve_vetor(int n, int v[MAX])
{ 
  int aux,i,j,cont=0;
  
  for ( i = 0; i < n; i++)
  {    
    scanf("%d", &v[i]);
  }
  
  for( i=0;i<n;i++)
  {
  	
    for( j=i+1; j<n;j++)
      {
         if(v[i] <= v[j])
         {
           aux= v[i];
           v[i] = v[j];
           v[j] = aux;
           cont =cont+2;                     
         }          
       }       
  }
  return cont;
    
 }

