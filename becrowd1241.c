#include <stdio.h>
#include <string.h>

/// se B corresponde aos últimos dígitos de A.
int main(){
	
	
	int A, B, teste,i,j, tamB, tamA, diferenca, indice, igual=0;
 char valorA[2000], valorB[2000], *pont;

 scanf("%d", &teste);

 for(i=0; i<teste; i++){
     scanf("%s", valorA);
     scanf("%s", valorB);

     tamB= strlen(valorB);
     tamA= strlen(valorA);
   diferenca = tamA - tamB;
   indice= diferenca;

    if(!strcmp(valorA, valorB)) printf("encaixa\n");
    else if(tamB>tamA) printf("nao encaixa\n");
	
	else{
		for(j=0; j<tamB; j++){
            if(valorA[indice] == valorB[j]){
            igual++;
            indice++;
			}
			else break;
		}
                
        if(igual== tamB) printf("encaixa\n");
        else printf("nao encaixa\n");
        igual=0;
}		
		
	}
	return 0;
}
