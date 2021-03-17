#include <stdio.h>
#include<string.h>

int palindrome(char string [30]){
	int j, s, c=0;
	for (j=0; j<=strlen(string); j++){
		s=(strlen(string))-(j+1);
		if (string[j]!=string[s]){
			c=c+1;
		}	
		}
	if (c==0){
		printf("this is a palindrome");
	}
	else {
		printf("this is not a palindrome");
	}
	}
int main (void){
	palindrome("elile");
	return 0;
}
