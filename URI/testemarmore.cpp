#include <stdio.h> 
#include <stdlib.h> 
 
void add_org(int *vet,int num,int fim); 
int busca(int *vet,int ini,int fim,int num); 
 
int main(){ 
 
int *vet,tama,n,i,aux,M,Contador = 1, Z=0; 
 
while(true)
{
    scanf("%d",&tama); 
    scanf("%d",&M);
     
    if(tama == 0 and M == 0)
        break;
     
    if((vet=(int*)malloc(tama*sizeof(int)))==NULL){ 
        exit(1); 
    } 
     
    for(i=0;i<tama;i++){ 
        scanf("%d",&n); 
        add_org(vet,n,i); 
    } 
 
    for(int j=0;j<M;j++)
    {
        scanf("%d",&n);
        if(Z==0)
        {
            printf("CASE# %d:\n",Contador);
            Z = 1; 
        }
        aux=busca(vet,0,tama-1,n); 
        if(aux>=0) 
            printf("%d found at %d\n",n,aux+1); 
        else
            printf("%d not found\n",n); 
    }
    Contador++;
    Z = 0;
}
return 0; 
} 
 
void add_org(int *vet,int num,int fim){ 
    int i,j; 
    for(i=0;i<fim;++i){ 
        if(num<=vet[i]){ 
            for(j=fim;j>i;--j){ 
                vet[j]=vet[j-1]; 
            }
            break; 
        } 
    } 
    vet[i]=num; 
} 
 
int busca(int *vet, int ini, int fim, int num){ 
    int meio; 
    if(ini>fim) 
        return -1; 
    meio = (fim+ini)/2; 
    if(num == vet[meio]) 
        return(meio); 
    else
        if(num > vet[meio]) 
            return busca(vet, meio+1, fim, num); 
        else
            return busca(vet, ini, meio-1, num); 
}
