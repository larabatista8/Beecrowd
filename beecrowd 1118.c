#include <stdio.h>
 
int main() {
 
    float n1, n2, media;
    int codigo, i, teste;
    
    while(1){
        
    do{    
      scanf("%f", &n1); 
      
      if(n1<0 || n1>10) printf("nota invalida\n");
      
    } while(n1<0 || n1>10);
    do{    
      scanf("%f", &n2);  
      if(n2<0 || n2>10) printf("nota invalida\n");
    } while(n2<0 || n2>10);    
     media = (n1+n2)/2;
     printf("media = %.2f\n", media);
     do{
     printf("novo calculo (1-sim 2-nao)\n");
     scanf("%d", &codigo);
         
     } while(codigo<1 || codigo>2);
     if(codigo==2) break;
     else{
       do{    
      scanf("%f", &n1); 
      
      if(n1<0 || n1>10) printf("nota invalida\n");
            
    } while(n1<0 || n1>10);
    do{    
      scanf("%f", &n2);  
      if(n2<0 || n2>10) printf("nota invalida\n");
    } while(n2<0 || n2>10);    
     media = (n1+n2)/2;
     printf("media = %.2f\n", media);
     do{
     printf("novo calculo (1-sim 2-nao)\n");
     scanf("%d", &codigo);
         
     } while(codigo<1 || codigo>2);
     if(codigo==2) break;   
         
     }
        
        
    }
 
    return 0;
}
