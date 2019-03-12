#include <stdio.h>

#define MAX_TAM 100

int pesquisaMenor(int v[MAX_TAM], int n);
void remove2(int v[MAX_TAM], int *n, int x);

int main(){


	int	n, i, k;


	scanf("%d", &k);

	while(k--){
		scanf("%d", &n);
		int vetor[n];
		
		for(i = 0; i < n;i++)
			scanf("%d", &vetor[i]);

		int x = pesquisaMenor(vetor, n);

		remove2(vetor, &n, x);

		for(i = 0; i < n;i++)
			printf("%d ", vetor[i]);
		printf("\n");
	}
}

void remove2(int v[MAX_TAM], int *n, int x){
		
	while(x != *n){
		v[x] = v[x+1];
		x++;
	}
	(*n)--;


	
}

int pesquisaMenor(int v[MAX_TAM], int n){
	int m = 0;

	while(n-- > 0){
		if(v[m] > v[n]){
			m = n;
		}
	}

	return m;
}

/*
	Remove 2 é melhor porque não precisa retornar o n para decrementar..
	


*/
