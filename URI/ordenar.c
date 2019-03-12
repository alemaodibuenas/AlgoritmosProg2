#include<stdio.h>
#include<string.h>
#define MAX 1000
void ordenar(int n,char vetor[MAX]);
int main(void){
	int n;char vetor[MAX];
	scanf("%d", &n);
	ordenar(n,vetor);	
	return 0;
}

void ordenar(int n,char vetor[MAX]){
	char aux;int i,j;	
	for(i=0;i<n;i++){
		scanf("%s", &vetor[i]);
	}
	
	for(i=0;i<n;i++){
		for(j = i+1;j<n;j++){
			if (strcmp (vetor[i],vetor[j])){
				strcpy (aux,vetor[i]);
				strcpy (vetor[i],vetor[j]);
				strcpy (vetor[j],aux);
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s ", vetor[i]);
	}
	
	
}
