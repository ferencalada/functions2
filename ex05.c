#include <stdio.h>

int factorial (int num){
	int i; int result=num;
	if (num==0 || num==1){
		return 1;
	}
	else {
	
	for (i=num-1; i>=2; i--){
		result=result*i;
	}
	return result;
}
}

int main (void){
	printf("the factorial is %d",factorial(5));
	return 0;
}
