#include <stdio.h>
 int range (float num, int x, int y){
 	if (num>x && num<y){
 		printf("%f is inside the given range",num);
 	}
 	else {
 		printf("%f is not inside the given range",num);
 	}
 	return 0;
 }
 
 int main (void){
 	range(7,5,10);
 	return 0;
 }
 
