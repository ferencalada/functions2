#include <stdio.h>

int letters (char string [30]){
	int i, lowercase=0, uppercase=0;
	for (i=0; i<=(strlen(string)); i++){
		if (string[i]=='q'||string[i]=='w'||string[i]=='e'||string[i]=='r'||string[i]=='t'||string[i]=='y'||string[i]=='u'||string[i]=='i'||string[i]=='o'||
		string[i]=='p'||string[i]=='a'||string[i]=='s'||string[i]=='d'||string[i]=='f'||string[i]=='g'||string[i]=='h'||string[i]=='j'||string[i]=='k'||
		string[i]=='l'||string[i]=='z'||string[i]=='x'||string[i]=='c'||string[i]=='v'||string[i]=='b'||string[i]=='n'||string[i]=='m'){
			lowercase=lowercase + 1;
		}
		if (string[i]=='Q'||string[i]=='W'||string[i]=='E'||string[i]=='R'||string[i]=='T'||string[i]=='Y'||string[i]=='U'||string[i]=='I'||string[i]=='O'||
		string[i]=='P'||string[i]=='A'||string[i]=='S'||string[i]=='D'||string[i]=='F'||string[i]=='G'||string[i]=='H'||string[i]=='J'||string[i]=='K'||
		string[i]=='L'||string[i]=='Z'||string[i]=='X'||string[i]=='C'||string[i]=='V'||string[i]=='B'||string[i]=='N'||string[i]=='M'){
			uppercase=uppercase + 1;
		}
	}
	printf("The sentence has %d uppercase letters and %d lowercase letters",uppercase,lowercase);
}

int main (void){
	char string [30]="This Is My String";
	letters(string);
	return 0;
}
