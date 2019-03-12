#include<stdio.h>

int main(void){
	int n,nota100,nota50,nota20,nota10,nota5,nota2;
	

	
	scanf("%d", &n);
printf ("Notas:\n");
printf ("%d nota(s) de R$ 100,00\n",n/100);
n %=100;
printf ("%d nota(s) de R$ 50,00\n",n/50);
n %=50;
printf ("%d nota(s) de R$ 20,00\n",n/20);
n %=20;
printf ("%d nota(s) de R$ 10,00\n",n/10);
n %=10;
printf ("%d nota(s) de R$ 5,00\n",n/5);
n %=5;
printf ("%d nota(s) de R$ 2,00\n",n/2);
n %=2;
printf("Moedas:\n");
printf("%d moeda(s) de R$ 1,00\n", n);
 return 0;
}
	
	/*MOEDAS:
	1 moeda(s) de R$ 1.00
	1 moeda(s) de R$ 0.50
	0 moeda(s) de R$ 0.25
	2 moeda(s) de R$ 0.10
	0 moeda(s) de R$ 0.05
	3 moeda(s) de R$ 0.01*/
	
	

