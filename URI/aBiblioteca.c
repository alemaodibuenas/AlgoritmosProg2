#include<stdio.h>
#define MAX 1000

int main(void){

int n,v[MAX];

while(scanf("%d", &n)==1){

escreve_vetor(n,v);
}
return 0;
}

void escreve_vetor(int n, int v[MAX])
{ 
  int aux,livro,i,j;
  
  for ( i = 0; i < n; i++)
  {    
    scanf("%d", &v[i]);
  }
  
  for( i=0;i<n;i++)
  {
    for( j=i+1; j<n;j++)
      {
         if(v[i] > v[j])
         {
           aux= v[i];
           v[i] = v[j];
           v[j] = aux;
         }
       }
  }
  for ( i = 0; i < n; i++)
  {
   printf("%04d\n", v[i]);
  }
 }


