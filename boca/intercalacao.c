#include<stdio.h>

#define MAX 1000
void bubblesort(int n,int v4[MAX]);
int main(void){
	int v1[MAX],v2[MAX],v3[MAX],v4[MAX]; // vetor lista tamnho 1000
	int n; //tamanho da lista
	int i,j; 	
	
	scanf("%d", &n);
	while(n != 0)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d", &v1[i]);
		}
			
		for(i=0;i<n;i++)
		{
			scanf("%d", &v2[i]);
		}
		
		for(i=0;i<n;i++)
		{
			scanf("%d", &v3[i]);
		}
		
		j=0;
		for(i=0;i<n;i++){
			v4[j] = v1[i];
			v4[j+1] = v2[i];
			v4[j+2] = v3[i];
			j = j+3;		
		}
		
		bubblesort(n,v4);
		
		scanf("%d", &n);

	}

	
	
	return 0;
}

void bubblesort(int n,int v4[MAX])
{
int i,j,aux=0;
for( i=0;i<3*n;i++)
  {
    for( j=i+1; j<3*n;j++)
      {
         if(v4[i] > v4[j])
         {
           aux= v4[i];
           v4[i] = v4[j];
           v4[j] = aux;
         }
       }
  }
  
  for(i=0;i<3*n;i++)
  {
	printf("%d ", v4[i]);
			
  }
	printf("\n");
}
