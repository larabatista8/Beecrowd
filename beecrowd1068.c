#include <stdio.h>
#include <string.h>
int main() {
 char s[1001];
 int i, tam, tot;
 
 while(scanf("%s", &s)!= EOF){
     tot=0;
     tam=strlen(s);
     
     for(i=0; i<tam; i++){
         if(s[0]==')' || s[tam-1]== '('){
             tot++;
             break;
             
         } 
        else if(s[i]=='(') tot++;
         else if(s[i]==')') tot--;
         }
         
         if(tot==0) printf("correct\n");
         else printf("incorrect\n"); 
    
     
     
 }
 
    
 
    return 0;
}
