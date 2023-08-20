#include <stdio.h>
#include <string.h> 
#include <ctype.h>
int main() {

    char sobrenome[43], vogais[12]="AaEeIiOoUu",*p;
    int i,k, j, casos, tamanho, quant=0;

    scanf("%d", &casos);
     for (i = 0; i < casos; i++){
         quant=0;
         scanf("%s", sobrenome);

       tamanho = strlen(sobrenome);
       for(j=0; j<tamanho; j++){
         p = strchr(vogais,sobrenome[j]);  
           if(p) quant=0;
         else {
              if (sobrenome[j]== ' ') quant+=0;
           else quant+=1;

         }

         if (quant==3) break;
       }

     if (quant==3) printf("%s nao eh facil\n", sobrenome);
     else printf("%s eh facil\n", sobrenome);

     }

    return 0;
}
