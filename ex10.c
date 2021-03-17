#include <stdio.h>

int even_numbers (int list [9]){
	int i, x;
	int size = 9;
	for (i=0; i<size; i++){
        if (list[i] % 2 == 0){
			printf("%d ", list[i]);
        }
		else{
		}
	}
}

int main (void){
	int list [9]={3, 7, 7, 2, 8, 8, 8, 8, 10};
	even_numbers(list);
}
