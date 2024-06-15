#include<bits/stdc++.h>
using namespace std ; 
#define ll long long  
#define MOD 1000000007
 
int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    ll n ; 
    cin>>n ; 

    vector<ll>a(n) ; 

    for(ll i=0 ; i<n ; i++){
        cin>>a[i] ; 
    }
    int count = 0 ; 
    vector<ll>presum(n,0) ; 
    presum[0]= a[0] ;
    unordered_map<ll,ll>store ; 
    store[0]++ ; 
    for(int i=0 ; i<n ; i++){
        presum[i] = presum[i-1] + a[i] ;

        if(store.find(presum[i]) != store.end()){
            cout<<"YES"<<"\n" ;
            count = 1 ; 
            break; 
        } 

        store[presum[i]]++ ; 
    }

    if(count == 0 ){
        cout<<"NO"<<"\n" ;
    }


    return 0 ; 
}