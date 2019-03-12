#include<stdio.h>
#include<stdlib.h>


typedef struct cel{
   int chave;
   struct cel *prox;	
}celula;

void insere_fim(int x,celula **lst);
void insere_inicio(int x,celula **lst);

void remove_inicio(celula **lst);
void busca_remove_S(int x, celula **lst);
 
void desalocar(celula **lst);
void imprimir(celula *lst);

int main(void)
{
	celula *lista = NULL;
	int x;
	scanf("%d", &x);
	while(x != 0)
	{
	  insere_inicio( x,&lista);
	  scanf("%d", &x);
	  imprimir(lista);
	}	
   return 0;	
}

void insere_inicio(int x,celula **lst)
{
	celula *novo;
	novo = (celula*)calloc(1,sizeof(celula));
	novo->chave = x;
	novo->prox = *lst;
	*lst = novo;	
}

void insere_fim(int x,celula **lst)
{
	celula *novo,*p;
	novo = (celula*)calloc(1,sizeof(celula));
	novo->chave = x;
	
	if(*lst == NULL)
	   *lst = novo;
	else
	{
		p = *lst;
		while(p->prox != NULL)
			p = p->prox;
			
		p->prox = novo;		
	}
}

void busca_remove_S(int x, celula **lst) 
{
	celula *p,*q;
	p = NULL;
	q = *lst;
	
	while(q != NULL && q != q->chave)
	{
		p = q;
		q = q->prox;
	}
	
	if(q != NULL)
	  if(p != NULL)
	  {
	    p->prox = q->prox;
	    free(q);	
	  }
	    
	else
	{
		*lst = q->prox;
		free(q);
	}
	
}

void imprimir(celula *lst)
{
	celula *p;
	
	for(p = lst;p != NULL;p = p->prox)
	  printf("%d", p->chave);
	  
}

