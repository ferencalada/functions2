#include<stdio.h>
int max_of_3(int x, int y, int z){
	if(x>y){
		if(x>z){
			return x;
		}
		else { return z;
		}
	}
	if (y>x){
		if(y>z){
			return y;
		}
		else { return z;
		}

	}	
}


int main (void){
	int x=1; int y=2; int z=3;
	printf("the biggest number is %d",max_of_3(x,y,z));
	return 0;
}
