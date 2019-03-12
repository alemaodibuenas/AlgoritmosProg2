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
  char nomes[20];
  for(i=1;i<n;i++)
  {    
    strcpy(nomes,nome[i].nome);
    x= nome[i].numero;
    for(j=i-1; nome[j].numero > x &&  j >= 0;j--)
    {
      strcpy(nome[j+1].nome,nome[j].nome);	
      nome[j+1].numero = nome[j].numero;
    } 
          strcpy(nome[j+1].nome,nomes);
          nome[j+1].numero = x; 
  }
  char aux[20];
  int aux2;
  for(i=0;i<n;i++)
     for(j=i+1;j<n;j++)
       if(nome[i].numero == nome[j].numero)
       {
	       if(strcmp(nome[i].nome,nome[j].nome)<1)
	       {
	          strcpy(aux,nome[i].nome);
	          aux2 = nome[i].numero;
	          strcpy(nome[i].nome,nome[j].nome);
	          nome[i].numero = nome[j].numero;
	          strcpy(nome[j].nome,aux);      
	          nome[j].numero = aux2;	
	       }	
       	
       }
       
  
  
  
  
  
  //imprimir
  for(i=n-1;i>=0;i--)
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
