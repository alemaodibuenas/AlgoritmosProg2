#include<stdio.h>
#include<math.h>


int main(void){
	double a,b,c,delta,x1,x2;
	scanf("%lf %lf %lf", &a,&b,&c);
	
	delta = ((b*b) -4*a*c);
	
	if (delta<0){
			
	}
	else if(delta ==0){
		printf("Impossivel calcular\n");
	}
	  else {
	  
	  	x1 = (-b+(sqrt(delta)))/(2*a);
	  	x2 = (-b-(sqrt(delta)))/(2*a);		
		printf("R1 = %f\n", x1);
		printf("R2 = %f\n", x2);	
	  }
return 0;
}

	


	

