#include <stdio.h>
#include <string.h>
int main() {
   
  int testes, pessoas, i, j, k, igual;
  char idioma;
  char nacionalidade[100][21];
  scanf("%d", &testes);
  
  for(i=0; i<testes; i++){
      scanf("%d", &pessoas);
      igual=0;
      for(j=0; j<pessoas; j++){
          scanf("%s", nacionalidade[j]);
          if(strcmp(nacionalidade[0], nacionalidade[j])==0)
          igual++;
          
      }
      if(igual==pessoas)printf("%s\n", nacionalidade[0]);
else printf("ingles\n");
  }


return 0;
}
