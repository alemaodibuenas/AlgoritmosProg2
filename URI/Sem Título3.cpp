#include <stdio.h>
#define MAX 100

int main(void)
{
char nome1[MAX+1], nome2[MAX+1], palavra1[MAX+1], palavra2[MAX+1];
int i1, i2;
FILE *ptr;

ptr = fopen("mesclado.txt", "w");

while()




fclose(ptr);

return 0;
}





   int aux,livro,i,j,n,v[MAX+1];

  
  for ( i = 0; i < n; i++)
  {    
    scanf("%d", &v[i]);
  }
  
  for( i=0;i<n;i++)
  {
    for( j=i+1; j<n;j++)
      {
         if(v[i] > v[j])
         {
           aux= v[i];
           v[i] = v[j];
           v[j] = aux;
         }
       }
  }
  for ( i = 0; i < n; i++)
  {
   printf("%04d\n", v[i]);
  }
 }
	
	
	
	
	


