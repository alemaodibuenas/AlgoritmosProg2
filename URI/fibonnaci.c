 #include<stdio.h>
int fib(int n ,int *call);
 int main(void){

 int X[100],N,*call,ncont,resultado,i;
 call = &ncont;
 *call = 1;
 scanf("%d", &N);
 for(i=0;i<N;i++)
 {
   
   scanf("%d", &X[i]);
        resultado = fib(X, call);
        *call = 1;
 }
 for(i=0;i<N;i++){
         printf("fib(%d) = %d calls = %d\n",X, ncont, resultado);
}
 
 return 0;
 }

int fib(int n[100], int *call){
  
  if (n<3){
  *call +=1;
  return 1;
}
    else
    *call+=2;    
    return fib(n-1,call) + fib(n-2,call);
    
}
