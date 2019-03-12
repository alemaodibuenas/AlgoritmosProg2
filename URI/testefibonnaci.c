#include <stdio.h>

// Assinaturas
int fibonacci(int num, int *pChamadas);

void main(void){
    int N; // caso de teste
    int X; // inteiro para desenvolver
    int i;
    int resultado;
    int nChamadas, *pChamadas;

    pChamadas = &nChamadas;
    *pChamadas = 1;

    scanf("%i", &N);

    for(i=0; i<N; i++){
        scanf("%i", &X);
        resultado = fibonacci(X, pChamadas);
        printf("fib(%i) = %i calls = %i\n",X, nChamadas, resultado);
        *pChamadas = 1;
    }
}

int fibonacci(int num, int *pChamadas){

    if(num == 1 || num == 2){
        *pChamadas += 1;
        return 1;
    }else{
        *pChamadas += 2;
        return fibonacci(num-1, pChamadas) + fibonacci(num-2, pChamadas);
    }
}
