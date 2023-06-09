#include <stdio.h>
 
int main() {
 
    int N[20], R[20], i, j,k;
    
    for(j=0; j<20; j++){
        
        
        scanf("%d", &N[j]);
        
        R[j]= N[j];
    }
   
   for(i=0; i<20; i++){
      
       N[i]=R[20-i-1];
       
   } 
    
 for(k=0; k<20; k++){
     
 printf("N[%d] = %d\n", k, N[k]);    
 }
    return 0;
}
