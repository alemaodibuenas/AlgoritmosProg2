#include<stdio.h>
#include<string.h>


typedef struct
{
	char num[50];
	
} Cadastro;

int main(void){
	int n;
	 Cadastro cadastro[100];
	 
	 //Quantos livros:
	 scanf("%d", &n);
	 for(int i=0;i<n;i++){
	 	
	 	scanf("%s", cadastro[i].num);
	               
	 }
	
	for(int i=0;i<n;i++){
		printf("%s", cadastro[i].num);
	}
	
	return 0;
}
