#include <stdio.h>
#include <stdlib.h>
 
int main() {
     int x[10];
  int i;
  for (i = 0; i<10; i++) 
  {      
     scanf("%d", &x[i]); 
  }
  {	
  for (i = 0; i<10; i++)
    
	printf("%d ", x[i]); 
}
 {
   for(i=0; i<9; i++)
    if (x[i] >= x[i+1]) break;
  if (i==9) printf("\nYes\n");
  else printf("\nNo\n");   
  return 0;
}}
