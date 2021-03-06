/**************************************************
*
* Nome do(a) estudante: Giovanni Ricardo Pratto
* Trabalho 1
* Professor(a): Diego
*
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#define MAX_NOME 100
#define MAX_CAPIVARAS 100

/* Armazena informacoes de uma capivara */
typedef struct {
char nome[MAX_NOME+1];
int ultimo_peso; /* Ultimo peso registrado */
int var_total; /* Variacao total de peso */
int max_var_mensal; /* Maior variacao mensal encontrada */
char nascimento[11]; /* Data de nascimento */
} capivara;
/* Armazena informacoes de uma familia de capivaras */
typedef struct {
char nome[MAX_NOME+1];
int num_capis; /* Quantidade de capivaras na familia */
int num_meses; /* Meses registrados */
capivara capis[MAX_CAPIVARAS]; /* Armazena as capivaras */
} Familia;

int main(void){
	Familia familia[50];
	int f;    // familia
	int x,i,z,c,aux,m=-1;    // indices

	scanf("%d", &f);
	printf("\n");
	for(x=0;x<f;x++)
	{
	  scanf("%s",familia[x].nome);//nome da familia
      	  printf("\n");
	  scanf("%d", &familia[x].num_capis);//numero de capivaras
	  //n = familia[x].num_capis;//recebendo n capivaras

		for(i=0;i<familia[x].num_capis;i++)
		{
			scanf("%[^,],s", strlen(familia[i].capis[i].nome));
    			
		  //scanf("%[^,],s", familia[i].capis[i].nome);//nome da capivara
		  gets(familia[i].capis[i].nascimento);//data de nascimento
		  //printf("%s %s\n", familia[i].capis[i].nome,familia[i].capis[i].nascimento); testar o Nome e data nascimento
		}//fim do for
		fflush(stdin);
		printf("\n");
		scanf("%d", &familia[x].num_meses);//meses do ano
		printf("\n");
		//m = familia[x].num_meses;
		for(z=0;z<familia[x].num_meses && z < 12;z++)
		{
			if (z == 0)
			{
				printf("mes - janeiro");
			}
			if (z == 1)
			{
				printf("mes - fevereiro");
			}
			if (z == 2)
			{
				printf("mes - marco");
			}
			if (z == 3)
			{
				printf("mes - abril");
			}
			if (z == 4)
			{
				printf("mes - maio");
			}
			if (z == 5)
			{
				printf("mes - junho");
			}
			if (z == 6)
			{
				printf("mes - julho");
			}
			if (z == 7)
			{
				printf("mes - agosto");
			}
			if (z == 8)
			{
				printf("mes - setembro");
			}
			if (z == 9)
			{
				printf("mes - outubro");
			}
			if (z == 10)
			{
				printf("mes - novembro");
			}
			if (z == 11)
			{
				printf("mes - dezembro");
			}
			for(c=0;c<familia[x].num_capis;c++)//cadastrar peso
			{
			  printf("%s, ",familia[c].capis[c].nome);//nome da capivara
			  scanf("%d",&familia[c].capis[c].ultimo_peso);// peso da capivara
			  //calculo da varia��o
			  familia[c].capis[c].var_total = -familia[c].capis[c].var_total - familia[c].capis[c].ultimo_peso  ;
			  //familia[c].capis[c].var_total=soma;
			  //familia[c].capis[c].var_total=+familia[c].capis[c].ultimo_peso;//peso total da capivara
			}
			
			printf("\n");
			
		}// fim do for de meses
	
	//teste para impressao
	printf("Familia %s - variacoes apos %d meses\n", familia[x].nome,familia[x].num_meses);//nome da familia
	
	for(c=0;c<familia[x].num_capis;c++)
		{
		  printf("%d, %s",familia[c].capis[c].var_total,familia[c].capis[c].nome);//imprimir nome e peso
			  //printf("%-*s %d\n", m, frases[i], i);
		  //printf("%d %s",familia[c].capis[c].var_total,familia[c].capis[c].nome);//imprimir nome e peso
	               }
	}//fim do for da familia
	
	
	
	//impressao do programa
	/*for(x=0;x<f;x++)// for da familia
	{ 
		printf("Familia %s - variacoes apos %d meses\n", familia[x].nome,familia[x].num_meses);//nome da familia
		for(c=0;c<familia[x].num_capis;c++)
		{
		  //printf("Familia %s - variacoes apos %d meses\n", familia[x].nome,familia[x].num_meses);//nome da familia
		  printf("%d, %s\n",familia[c].capis[c].var_total,familia[c].capis[c].nome);//imprimir nome e peso
	    }
	}*/

	return 0;

}// fim do main

