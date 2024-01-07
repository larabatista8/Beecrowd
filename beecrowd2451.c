#include <stdio.h>
// i par esuqerda para direita
 // i impar direita para esquerda
int main() {
 int comida=0, N, i, j, ant=0,l=0;
 scanf("%d", &N);
 char jogo[N+1][N+1];
 
 for(i=0; i<N; i++){
    scanf("%s", jogo[i]); 
	if(i%2==0){
		for(j=0;j<N; j++){
			if(jogo[i][j]== 'o') comida++;
     		if(jogo[i][j]== 'A') comida=0;
    	    if(ant<comida) ant=comida;	
				}
		
	}
	else{
		for(j=N-1;j>=0; j--){
			if(jogo[i][j]== 'o') comida++;
     		if(jogo[i][j]== 'A') comida=0;
    	    if(ant<comida) ant=comida;	
				}
		
	}	
}
 printf("%d\n", ant);
    return 0;
}
