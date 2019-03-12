#include <stdio.h>
#include <stdlib.h>

#define MAX 100


void maiores(int n, int v[MAX], int * max, int * min);


int main(void){

	int k, n;
	int min, max;
	scanf("%d", &k);

	while(k--){
		int i = 0;
		
		scanf("%d", &n);
		int vetor[n];
		
		while(i < n){
			scanf("%d", &vetor[i++]);
		}
		maiores(n-1, vetor, &max, &min);


		printf("%d %d\n", min, max);
	}
}


void maiores(int n, int v[MAX], int *max, int *min){
	*max = v[n];
	*min = v[n-1];
	while(n--){
		if(*max <= v[n]){
			*min = *max;
			*max = v[n];
		}
		else
			if(*min <= v[n])
				*min = v[n];
	}		

}
