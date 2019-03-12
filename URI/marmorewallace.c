#include <stdio.h>
#include <stdbool.h>

#define MAX 66

int quicksort(int p,int r, int v[]);
void troca(int *a, int *b);
int separa(int p,int r, int v[MAX]);

int main(void)
{
	int n = 1;        // numero de marmores
	int q = 1;	      // numero de consultas que Meena  deseja fazer
	int num[MAX]; //numero escritos em cada umas das n marmores
	int cons[MAX]; // consultas de Meena
	bool conf = 0;
	int cont = 1; // contador de cases	
	int j, i;
	
	scanf("%d %d", &n, &q);
while( n != 0 && q != 0){		
	for( j = 1; j <= n; j++){
		scanf("%d", &num[j]);
	}
	for(j = 1; j <= q; j++){
		scanf("%d", &cons[j]);
	}
	quicksort(n,0, num);

	printf("CASE# %d: \n",cont );
	for(j = 1; j <= q; j++){
		conf = 0;		
		for(i = 1; i <= n; i++){
			if(cons[j] == num[i]){
				
				printf("%d found at %d\n",cons[j], i+1);
				conf = 1;				
				i = n+1;
			}			
		}
		if( conf == 0){			
			printf("%d not found\n",cons[j] );
			
		}
	}
	cont++;
	scanf("%d %d", &n, &q);	
}	

	return 0;	
}


int quicksort(int p,int r, int v[MAX]){
    int q;
    if(p<r)
    {
      q=separa(p,r,v);
      quicksort(p,q,v);
      quicksort(q+1,r,v);
    }
    return q;
}

void troca(int *a, int *b){
    int aux;
    aux = *b;
    *b = *a;
    *a= aux;

}

int separa(int p,int r, int v[MAX]){
	int x,i,j;
	x=v[p];
	i=p-1;
	j=r+1;
	while(1){
		do{
			j--;
		}while(v[j]>x);
		do {
			i++;
		}while(v[i]<x);
		if(i<j)
		troca(&v[i], &v[j]);
		else
		return j;
	}
}
