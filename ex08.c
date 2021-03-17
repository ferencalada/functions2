#include <stdio.h>

int unique_elements (int list [10]){
	int i, x, k;
	int size = 10;
	for (i=0; i<size; i++){
		for (x=i+1; x<size; x++){
			if (list[i]==list[x]){
				for(k=x; k<size; k++){
				    list[k] = list[k+1];
				}
				size--;
				x--;
			}
		}
	}
    for(i=0; i<size; i++)
    {
        printf("%d", list[i]);
    }
	return 0;
}

int main (void){
	int list [10]={1,2,2,2,4,1,5,7,2,6};
	unique_elements(list);
}
