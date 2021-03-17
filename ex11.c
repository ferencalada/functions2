#include <stdio.h>

int perfectnum (int number){
	int i, sum=0;
	for (i=number-1; i>=1; i--){
		if (number%i==0){
			sum=sum+i;
		}
	}
	if (sum==number){
		printf("the number is perfect");
	}
	else {
		printf("the number is not perfect");
	}
}

int main (void){
	perfectnum(6);
	return 0;
}
