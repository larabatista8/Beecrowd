#include <bits/stdc++.h>
 using namespace std;
int main() {
 
    stack<char> s;
    string d;
    int tam,tt,n;
    cin>>n;
    while (n--){
        cin>>d;
        tt=0;
        tam= d.length();
        
        for(int i=0; i<tam; i++){
            if(d[i]== '<'){ 
                s.push(d[i]);
               
            }
            else if(d[i]== '>' && !s.empty()) {
                s.pop();
                 tt++;
                
            }
        }
        cout<<tt<<"\n";
        while (s.size() != 0) {
        s.pop();
    }
            
        }
        
        
    
 
    return 0;
}
