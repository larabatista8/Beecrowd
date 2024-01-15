#include <stdio.h>
#include <bits/stdc++.h>
 using namespace std;

  pair <int, char> p[11234];
  set<int> s;
int main() {
  int n,d,e,tt;
  while(cin>>n){
  	d=e=tt=0;
  	for(int i=0;i<n;i++){
  		cin>> p[i].first>> p[i].second;
  		
	  }
	  
	  	for(int i=0;i<n;i++){
	  	
		  if(s.count(p[i].first)==0){
		  	for(int j=0;j<n; j++){
		  		if(p[i].first== p[j].first){
		  			if(p[j].second=='D') d++;
		  			else e++;
				  } 
				 } 
			 d>=e? tt+=e: tt+=d;
			 s.insert(p[i].first);
			 d=e=0;
		  } 	
		  	
		  	
		  }  cout<< tt<<"\n";
		  s.clear();
		  d=e=tt=0;
  }
return 0;
}
