#include<stdio.h>
int ciclo(int n);
int main(void){
 int n;
 scanf("%d", &n);
 printf("%d\n", ciclo(n));

return 0;
}

int ciclo(int n){
if (n==1)
return 1;

else {
 if(n%2==0)
 n = n/2;
 else
 n = n*3+1;
 return 1+ciclo(n);
}



}
