#include <stdio.h>
#include <string.h> 
int main() {
 
   int teste, j , i, A, B, soma, tamanho;  
   char resultado[100];
  while(1){
     scanf("%d %d", &A, &B);
     if(A==0 && B==0) break;
      soma= A+B;
      sprintf(resultado, "%d", soma);
      tamanho= strlen(resultado);
      for(j=0; j<tamanho; j++){
        if(resultado[j]!= '0')
        printf("%c", resultado[j]);
        if(j==tamanho-1) printf("\n");
      } 
 
 } 
 return 0;
}
