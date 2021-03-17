#include <stdio.h>
#include <string.h>

int suma(int array[30]){
	int i, sum=0;
	for (i=0; i<=5; i++)
		sum= array[i]+sum;
		return sum;
}

int main(void){
	int array[30]={1, 2, 3, 4, 5};
	printf("the sum of the list is %d",suma(array));
}
