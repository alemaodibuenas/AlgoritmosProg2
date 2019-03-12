#include<stdio.h>
#define MAX 100
int find(int n,int x,int vetor[MAX]);

int main(void){
	int i,vezes;
	int n,x,j,vetor[MAX];
	scanf("%d", &vezes);
	for(i=0;i<vezes;i++)
	{
	  scanf("%d",&x);
	  scanf("%d",&n);	  
	  for(j=0;j<n;j++)
	  {
	     scanf("%d", &vetor[j]);		
	  }
	  
	  printf("%d\n",find(n,x,vetor));	
	  	
	}	
	
	return 0;
}

int find(int n,int x,int vetor[MAX]){
	int i,aux = -1;
	
	for(i =0;i<n;i++)
	if(x == vetor[i])
	aux = i;
	
	return aux;
	
	//return aux;
}
