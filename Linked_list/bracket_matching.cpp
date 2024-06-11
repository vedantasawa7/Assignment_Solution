#include <bits/stdc++.h>
using namespace std;

int main() {

  string s ; 
  cin>>s ; 
  
  stack<int>check ; 
  vector<int>ans(s.size() , -1); 
  
  for(int i=0 ; i<s.size() ; i++){
    if(s[i] == '('){
      check.push(i) ;
    }
    else{
      if(!check.empty()){
        int a = check.top() ; 
        check.pop() ;
        ans[i] = a ; 
        ans[a] = i ; 
      }
    }
  }
  
  for(int i=0 ; i<ans.size() ; i++){
    cout<<ans[i]<<" " ;
  }

  return 0;

}