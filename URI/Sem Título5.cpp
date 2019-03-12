#include <stdio.h>

int main ()
{
 int N=1,Q=1,i,j,X,C,cont=1,buscar=0,found=0,indice=0,limit=0,aux;
 while (N>0)
 {
 scanf("%d %d",&N,&Q);
 if (N==0 && Q==0)
 {
     break;
 }
 int vet[N],vetc[Q];
 for (i=0;i<N;i++)
 {
     scanf("%d",&X);
     vet[i]=X;
 }
 for (i=0;i<=N-1;i++)
 {
     for (j=i+1;j<N;j++)
     {
         if (vet[i]>vet[j])
         {
             aux = vet[i];
             vet[i]=vet[j];
             vet[j] = aux;

         }
     }
 }
  for (i=0;i<Q;i++)
 {
     scanf("%d",&C);
     vetc[i]=C;
     limit=i;
 }
 printf("CASE# %d:\n",cont);
 while (indice<=limit)
 {
 for (i=0;i<N;i++)
 {
     buscar=vetc[indice];
     if (vet[i]==buscar)
     {
        printf("%d found at %d\n",buscar,i+1);
        indice++;
         break;

     }
     else
     {
         found=i;
     }
     if (i==N-1 && found==N-1)
     {
         printf("%d not found\n",buscar);
         indice++;
         break;
     }
 }
 }
 cont++;
 if (cont==64)
 {
     break;
 }
 found=0;
 indice=0;
 limit=0;
 buscar=0;
 }
 return 0;
}
