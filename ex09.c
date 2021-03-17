#include<stdio.h>

int prime (int num){
	int i, counter=0;
	for (i=num; i>=1; i--){
		if (num%i==0){
			counter=counter+1;
		}
		
	}
	if (counter>2){
			printf("the number is not prime");
		}
		else {
			printf("the number is prime");
		}
}

int main(void){
	prime(994);
}
