#include <stdio.h>
 
int main() {
 
    int num, smaller, j,tam,ps,i;
    
    scanf("%d",&tam);
    int x[tam];
    
    for(i=0; i<tam; i++){
        scanf("%d", &x[i]);
    }
   smaller=x[0]; ps=0;
    
    for(j=0; j<tam; j++){
        if (x[j]<smaller){
            smaller= x[j];
            ps=j;
        }
        
    }
 
    printf("Menor valor: %d\n", smaller);
    
    printf("Posicao: %d\n", ps);
 
    return 0;
}
