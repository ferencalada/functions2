#include <stdio.h>
#include <string.h>
int i;
char reverse_string(char mystring[30]){

    for(i = strlen(mystring); i >= 0; i--){
        printf("%c",mystring[i]);
    }

}



int main(){
    
    char string[30] = "hello";

 

    reverse_string(string);

 

    return 0;
}
