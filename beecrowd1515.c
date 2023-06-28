#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
int main() {
 
   int teste, chegada, tempo, menor, enviado[100], i,j;
   char planeta[100][100], primeiro[100];
  do{ 
   scanf("%d", &teste);
   if(teste==0) break;
   for(i=0; i<teste; i++){
       
      scanf("%s %d %d", (planeta)[i], &chegada, &tempo);
       enviado[i]= chegada-tempo;
       menor=enviado[0];
   for(j=0; j<teste; j++){
     if(menor>enviado[j]) {
         menor=enviado[j]; 
    strcpy(primeiro,planeta[j]);    
     } 
      
   }
       
   }
   
  printf("%s\n", primeiro);  
  } while(teste!=0);
   
    return 0;
}
