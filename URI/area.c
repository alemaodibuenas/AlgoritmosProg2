#include<stdio.h>

int main(void){
	double area, pi = 3.14159,raio;
	scanf("%lf", &raio);
	area = (raio * raio)*pi;
	printf("%.4f\n", area);
	return 0;
}
