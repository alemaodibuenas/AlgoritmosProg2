#include<stdio.h>

int potencia(int x, int n);

int main(void){
int x,n;
scanf("%d %d", &x, &n);
printf("%d\n", potencia(x,n));


return 0;
}

int potencia(int x, int n){

if (n==0)
return 1;

else
 if (n%2 ==1)
 return x * potencia(x, n-1);

 else
  int p = potencia(x, n/2);
  return p*p;




}
