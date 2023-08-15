#include <stdio.h>
#include <stdlib.h> 
int main() {
    int n, maior=-100, i, *vet;
 while(scanf("%d", &n)!=EOF){
 vet= (int *) malloc(n*sizeof(int));
 if(!vet) exit(1);
 for (i=0; i<n; i++){
   scanf("%d", vet+i);  
 }
 
 
 for(i=0; i<n; i++){
     if(*(vet+i)>maior)maior=*(vet+i);
 }
   if(maior<10) printf("1\n");
    else if (maior>=10 && maior<20) printf("2\n");
   else printf("3\n");
   maior=-100;
 }
    return 0;
}
