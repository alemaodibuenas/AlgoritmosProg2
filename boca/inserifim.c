#include <stdio.h>
#include <stdlib.h>

struct cel {
int chave;
struct cel *prox;
};
typedef struct cel celula;

void insere_fim_S(int x, celula **lst);
void desalocar(celula **lista);

void imprime_lista(celula *lst);

int main(void){
int vezes,x,y;
//lista com cabeça
celula  *lista;
lista = NULL;
//lista = &c;

scanf("%d", &vezes);

for(x=0;x<vezes;x++)
{	
                 scanf("%d", &y);
                 while(y != 0)
                 {
                   	
                   insere_fim_S(y,&lista);
                   scanf("%d", &y);
	  }	
	imprime_lista(lista);
	printf("\n");
	desalocar(&lista);
	
}
  return 0;
}

/* Recebe um ponteiro para uma lista linear encadeada
e mostra o conteúdo de cada uma de suas células */
void imprime_lista(celula *lst)
{
celula *p;
for (p = lst; p != NULL; p = p->prox)
	printf("%d ", p->chave);	
}
//varrer a lista
void desalocar(celula **lista)
{
	celula *aux;
	
	while(*lista != NULL)
	{
		aux = *lista;
		*lista= (*lista)->prox;
		free(aux);
	}
}


// Funcao para inserir o elemto no final da lista 
void insere_fim_S(int x, celula **lst)
{
	celula *p;
	celula *novo = (celula *)malloc (sizeof (celula));
	novo->chave = x;
	novo-> prox = NULL;
if (*lst == NULL) 
{
	*lst=novo;
}
else 
{
	p = *lst;
	while (p->prox!=NULL)
	p = p->prox;
	p->prox = novo;
}
}



