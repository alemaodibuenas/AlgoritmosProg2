#include <stdio.h>
 
  int main()
{

  int f1, f2, f3, i, n;
  f1 = 0;
  f2 = 1;
  scanf("%d", &n);
  printf("%d",f1);
  printf("%d ", f2);
  	for(i = 2; i < n; i++)
  {
    	f3 = f1 + f2;
    	f1 = f2;
    	f2 = f3;
 
    
    printf("%d ", f3);
  }

  return 0;
}
