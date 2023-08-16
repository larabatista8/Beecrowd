#include <stdio.h>
#include <string.h>
int main() {
 
    int n,i, a,b,soma;
    char string[50], sinal;
    scanf("%d", &n);
    for(i=0;i<n; i++){
        
      scanf("%s", string);
      if(!strcmp(string, "P=NP")) printf("skipped\n");
      
      else{
        sscanf(string,"%d %c %d", &a,&sinal,&b);
        
        soma=a+b;
        printf("%d\n",soma);
      }
    }
 
    return 0;
}
