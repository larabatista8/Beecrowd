#include <stdio.h>
#include <string.h>
int main() {
 
   int quant,i,j,diferente=0;
   char num[10], one[4]="one";
    scanf("%d", &quant);
    for(i=0; i<quant; i++){
      scanf("%s",num);
      if(strlen(num)==5) printf("3\n");
      
      else{
          if(num[0]=='o' && (num[1]=='n'|| num[2]=='e'))printf("1\n");
          else if (num[0]!='o' && num[1]=='n' && num[2]=='e') printf("1\n");
        else printf("2\n");
      }
        
        
    }
    return 0;
}
