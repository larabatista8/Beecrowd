#include <stdio.h>
 long long int fat(long long int N){
   long long int i, fatorial=1;
     if(N==0) fatorial=1;
     else{
     for(i= 0; i<N; i++) 
     fatorial= fatorial* (N-i);
 }
 return fatorial;
 }


 
int main() {
 
   long long int m,n;
   while(scanf("%lld %lld", &m,&n) != EOF){
      printf("%lld\n", fat(m)+fat(n));
   }
    return 0;
}
