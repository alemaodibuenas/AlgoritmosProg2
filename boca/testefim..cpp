#include<stdio.h>
#include<stdlib.h>



typedef struct cel{
   int chave;
   struct cel *prox;	
}celula;

void insere_fim(int x,celula **lst);
void insere_inicio(int x,celula **lst);

void desalocar(celula **lst);

int main(void)
{
	celula *lista = NULL;
	int x;
	scanf("%d", &x);
	while(x != 0)
	{
	  insere_inicio( x,&lista);
	  scanf("%d", &x);
	
	}	
   return 0;	
}

void insere_fim(int x,celula **lst)
{
	celula *novo;
	novo = (celula*)calloc(1,sizeof(celula));
	
}
