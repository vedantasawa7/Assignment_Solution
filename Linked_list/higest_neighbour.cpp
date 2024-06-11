#include <bits/stdc++.h>
using namespace std;
using ll = long long ; 

int main() {
  
  ll n ; 
  cin>>n ;
  
  vector<ll>h(n) ;
  for(int i=0 ; i<n ; i++){
    cin>>h[i] ; 
  }
  
  vector<ll>ans(n) ;
  stack<ll>highest ; 
  highest.push(h[0]) ;
  ans[0] = -1 ; 
  
  for(ll i=1 ;i <n ; i++){
    
    while(!highest.empty() ){
      if(highest.top() > h[i]){
        ans[i] = highest.top() ; 
        highest.push(h[i]) ;
        break ; 
      }
      else{
        highest.pop() ; 
      }
    }
    
    if(highest.empty()){
      ans[i] = -1 ; 
      highest.push(h[i]) ;
    }
  }
  
  for(int i=0 ; i<n ; i++){
    cout<<ans[i]<<" " ; 
  }
  return 0;

}