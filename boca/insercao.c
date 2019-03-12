#include<stdio.h>
#define MAX 100
typedef struct
{
    char nome[30];
    int numero;
}Nome;

void insercao(int n,Nome nome[MAX]);
Nome novo();

int main(void)
{
  Nome nome[20];
  int vezes,x,n,i;
  
  scanf("%d", &vezes);
  for(x=0;x<vezes;x++)
  {
  	scanf("%d", &n);
  	for(i=0;i<n;i++)
  	{
  	  nome[i] = novo();	    	
               }
	insercao( n, nome);  	
  }    	
  return 0;	
}


void insercao(int n,Nome nome[MAX])
{
  int i,j,x;
  
  for(i=1;i<n;i++)
  {
    x= nome[i].numero;	
    for(j=i-1;j >= 0 &&  nome[j].numero > x;j--)
    {
      nome[j+1].numero = nome[j].numero;
      nome[j+1].numero = x;    	
    } 	
  }
  printf("\n");
  for(i=n;i>=0;i--)
  {
    printf("%s ", nome[i].nome );  	
  }
  printf("\n");	
}

Nome novo()
{
  Nome novo ;
  scanf("%s", novo.nome);
  scanf("%d", &novo.numero);
  return novo;
}
