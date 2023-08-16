#include <stdio.h>
#include <string.h> 
int main() {
 int casos, total=1,i,tamanho,j;
 char senha[17];
 
 scanf("%d", &casos);
 for(i=0;i<casos;i++){
     
     scanf("%s",senha);
     
     tamanho=strlen(senha);
     for(j=0;j<tamanho;j++){
         
      if( strchr("aeiosAEIOS", senha[j])) total*=3;
      else total*=2;
     }
     
     printf("%d\n", total);
      total=1;
 }
 return 0;
}
