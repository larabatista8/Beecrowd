#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
 
    int i, tamanho,j=0;
    char frase[51];
    
    while(scanf("%[^\n]%*c", frase)!= EOF){
        j=0;
    tamanho= strlen(frase);
    for(i=0; i<tamanho; i++){
        if(frase[i]>='a'&& frase[i]<='z' ||(frase[i]>='A' && frase[i]<='Z')){
            if(j%2==0) frase[i]= toupper(frase[i]);
            else frase[i]= tolower(frase[i]);
            j++;
        }
        else continue;
    }
    printf("%s\n", frase);
        
    } 
 
    return 0;
}
