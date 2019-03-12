#include<stdio.h>
#define MAX 10
void somaprod(int a,int b,int *soma,int *prod);

int main(void){
	int i,n,soma,prod;
		soma = 0,prod =1;
		scanf("%d", &n);
        		n/=2;
		while(n != 0)
		{
			        		n/=2;

                int a[MAX],b[MAX];
                int auxSoma =0;
                int auxProd =0;

                for(i=0;i<n;i++)
                {
                    scanf("%d %d", &a[i],&b[i]);
                    somaprod(a[i],b[i],&soma,&prod);
                }

                for(i=0;i<n;i++)
                {
                    if(a[i] > soma)
                     auxSoma++;

                     if(b[i] > soma)
                     auxSoma++;

                     if(a[i] > prod)
                     auxProd++;

                     if(b[i] > prod)
                     auxProd++;
                }

                 printf("%d %d\n", auxSoma,auxProd);
                 scanf("%d", &n);
                 n/=2;
          }//fim do while
	return 0;

}


void somaprod(int a,int b,int *soma,int *prod){
	*soma += a + b; 
	*prod *= a * b;
}
