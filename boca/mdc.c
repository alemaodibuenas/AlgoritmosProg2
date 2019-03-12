#include<stdio.h>

int mdc(int a,int b);

int main(void){
	int i,vezes;
	int a,b;
	scanf("%d", &vezes);
	for(i=0;i<vezes;i++)
	{
	  scanf("%d %d",&a,&b);	
	  printf("%d\n",mdc(a,b));	
	}	
	
	return 0;
}

int mdc(int a,int b){
	
	if(b == 0)
	   return a;	
		   
	else
	   return mdc(b,a%b);
}
