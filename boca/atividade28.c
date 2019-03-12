#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int n,i,j,k, nsalas, nalunos;
    int *votos, **matriz,**ptr;
    int *p;

    if (argc!=4)
        printf ("Erro na qtd de argumentos!");
    else
    {
        n=atoi (argv[1]);
        nsalas=atoi(argv[2]);
        nalunos=atoi(argv[3]);
        /*alocando o vetor*/
        votos=(int*)    malloc(n*sizeof(int));
        if(votos==NULL)
            return 0;
        else
        {
        /*alocar a matriz*/
        matriz=(int**) calloc(nsalas, sizeof(int*));
        if(matriz == NULL)
            return 0;
                        
            	for (ptr = matriz; ptr < (matriz+nalunos);ptr++) 
	{
		*ptr = (int*) malloc(nalunos*sizeof(int));
		if (*ptr == NULL)
		return 0; 
	}
        
        
        /*leitura da matriz*/
        
        for(p=&matriz[0][0];p<=&matriz[nsalas-1][nalunos-1];p++)       
                    scanf("%d", p);
            
            
            
        /*zerado votos*/
        for(i=0; i<n; i++)
            votos[i]=0;

        /*calculo dos votos*/
                for(p=&matriz[0][0];p<=&matriz[nsalas-1][nalunos-1];p++) 
	                 votos[matriz[i][j]-1]++;
            /*calculando o vencedor*/
            int maior, vencedor;
            maior=votos[0];
            vencedor=0;
            for(i=1; i<n;i++)
                if(votos[i]>maior)
                    {
	     maior=votos[i];
                    vencedor=i;
                    }
        /*imprimit vetor*/
        printf ("Vetor: %d", vencedor+1);
        /*candidatos*/
        int cont;
        for (k=1; k<=n; k++)
        {
            cont=0;
            for (i=0;i<nsalas; i++)
                for(j=0; j<nalunos; j++)
                    if(matriz[i][j]==k)
                        cont++;
                    votos[k-1]==cont;
        }
        /*reserva a parte de contagem de votos e calculo do vencedor usando aritmetica 
        de ponteiros (ponteiro para acessar as posicoes) e submeter no moodle */
        /*saida*/
        /* deslocar memoria*/
        free(votos);
        for(i=0; i<nsalas;i++)
            free(matriz[i]);
        free(matriz);

    }
}
}
