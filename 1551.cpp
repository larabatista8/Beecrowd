#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {

   int n,i,j;
   string frase;
   set<char> s;
   cin>>n;
	int quant=0;
   cin.ignore(); 

for(i=0;i<n;i++){
    getline(cin, frase);
    for(j=0; j<frase.size(); j++) {
        if(frase[j]>='a' && frase[j]<='z') s.insert(frase[j]); 
    }
    quant=s.size();
    s.clear();
    if(quant==26) cout<<"frase completa\n";
    else if(quant>=13) cout<<"frase quase completa\n";
    else cout<<"frase mal elaborada\n"; 
}

    return 0;
}
