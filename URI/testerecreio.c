#include <stdio.h>

int main(){
    int N, M, i, j, k, l, maior, pos_maior, temp, cont;
    cont = 0;
    
   scanf("%d", &N);
    scanf("%d", &M);

    int vetor[M];
    int total[M];

   for(k = 0; k <= N; k ++){
       for (i = 0; i < M; i++){
           scanf("%d", &vetor[i]);
       }
       for(j = 0; j < M; j++){

             maior = vetor[j];
           pos_maior = j;
              for(i = j; i < M; i ++){
                  if (vetor[i] > maior){
                      maior = vetor[i];
                      pos_maior = i;
                      cont = (cont +1);
                  }
              }

           temp = vetor[j];
           vetor[j] = maior;
           vetor[pos_maior] = temp;
           
           total[j] = M - cont*2;   
           
       }

    }   
       
   for (l= 0; l< M; l++){
          printf("%d\n ", total[l]);
   }
}


