#include<bits/stdc++.h>
using namespace std ; 
#define ll long long  
#define MOD 1000000007
 
int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    ll n,m ; 
    cin>>n>>m ; 
    vector<ll>a(n) ;
    vector<ll>b(m) ;
    
    for(ll i=0 ; i<n ; i++){
        cin>>a[i] ; 
    }

    for(ll i=0 ; i<m ; i++){
        cin>>b[i] ; 
    }

    map<ll,ll>unio ; 

    for(int i=0 ; i<n ; i++){
        unio[a[i]]++ ; 
    }

    for(int i=0 ; i<m ; i++){
        unio[b[i]]++ ; 
    }

    for(auto it:unio){
        cout<<it.first<<" " ; 
    }

    return 0 ; 
}