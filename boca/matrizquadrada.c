
#include<stdio.h>
#define MAX 3

int somaM(int n, int A[n][n])
{
    int *p;
    int soma = 0;

    for(p = A[0]; p < A[0]+(n*n); p++)
    {
        soma += *p;
    }
    return soma;
}

int main(void)
{
	
    int n,vezes,x;
    scanf("%d", &vezes);
    for(x=0;x<vezes;x++)
    {
    scanf("%d",&n); 	
    int A[n][n];
    int i, j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    }

    printf("%d\n", somaM(n, A));
    }    

    return 0;
}

