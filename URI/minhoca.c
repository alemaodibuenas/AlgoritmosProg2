#include<stdio.h>
#define MAX 100
int main(void){
	int linha,coluna,i,j,aux;
	int matriz[MAX][MAX],vetor[MAX];
	
	scanf("%d %d", &linha,&coluna);	
	for(i=0;i<linha;i++){
		vetor[0];
		for(j=0;j<coluna;j++){
			scanf("%d", &matriz[i][j]);			
		}
	}
	for(i=0;i<linha;i++){
		vetor[0];
		for(j=0;j<coluna;j++){
			vetor[i] = vetor[i] + matriz[j][i];
		}
	}
	for(i=0;i<coluna;i++){
		
		printf("%d\n", vetor[i]);
	}
	
	return 0;
}
