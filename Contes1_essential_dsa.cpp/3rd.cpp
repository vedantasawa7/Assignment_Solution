#include<bits/stdc++.h>
using namespace std ; 
using ll = long long ; 

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    ll n ,m;
    cin>>n>>m ; 

    vector<ll>a(n) ;
    for(int i=0 ; i<n ;i++){
        cin>>a[i] ; 
    }

    if(m>n){
        cout<<-1<<"\n" ; 
    }
    else if(m == n){
        cout<<1<<"\n" ;
    }
    else{
        
    }

    return 0 ; 
}