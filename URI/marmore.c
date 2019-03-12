#include<stdio.h>
#define MAX 1000

int ordenar(int n,int q,int v[MAX]);
void troca(int *a, int *b);
int main(void){
    int v[MAX],cont=0,resultado;
    int n=1,q=1;
while (n != 0 && q != 0 && cont < 65){
    scanf("%d %d", &n,&q);
    resultado = ordenar(n,q,v);
    cont++;
    
    	if(resultado!=q){
    		printf("CASE# %d:\n", cont);
    		printf("%d found at %d\n",q,resultado);
	    }
	    else{
		    
	     printf("%d not found\n", q);
	}
    
}
return 0;
}

int ordenar(int n,int q,int v[MAX]){
    int i,j,min;
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    
    
    for(i=0;i<n-1;i++){
        min=1;
        for(j=i+1;j<n;j++)
            if(v[j] < v[min])
            min=j;
        troca(&v[i], &v[min]);
    }
	/*
    for( i=0;i<n;i++)
    {
        for( j=i+1;j<n;j++)
      {
         if(v[i] > v[j])
         {
           aux= v[i];
           v[i] = v[j];
           v[j] = aux;
         }
       }
    } */

    for(i=1;i<=n;i++){
            if(q == v[i]){
            q=i+1;
            }
    }
    return q;
}

void troca(int *a, int *b){
    int aux;
    aux = *b;
    *b = *a;
    *a= aux;

}







