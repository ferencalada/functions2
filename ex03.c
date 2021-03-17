#include <stdio.h>
#include <string.h>

int product(int array[30]){
	int i=0; int mult=1;
	for (i=0; i<=4; i++)
		mult= array[i]*mult;
		return mult;
}

int main(void){
	int array[30]={1, 2, 3, 4, 5};
	printf("the product of the list is %d",product(array));
}
