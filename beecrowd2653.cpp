#include <bits/stdc++.h>
 using namespace std;
int main() {
 
    string str;
    set<string> s;
    while(cin>>str){
        if(s.count(str)==0) s.insert(str);
    }
    
    cout<<s.size()<<"\n";
 
    return 0;
}
