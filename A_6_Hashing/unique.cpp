#include<bits/stdc++.h>
using namespace std ; 
#define ll long long  
#define MOD 1000000007
 
int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    ll n,k ; 
    cin>>n>>k ; 

    vector<ll>a(n) ; 

    for(ll i=0 ; i<n ; i++){
        cin>>a[i] ; 
    }

    unordered_map<ll,ll>store ; 
    int count = 0 ; 

    for(int i= 0 ; i < k ; i++){
        store[a[i]]++ ; 
    }

    for(auto it:store){

        if(it.second > 0)
        count++ ; 
        
    }
    cout<<count<<" "; 

    int j = k ; 

    for(int i=1 ; i<n-k+1 ; i++){
        if(store[a[i-1]] == 1 ){
            count-- ; 
        }
        store[a[i-1]]-- ; 

        if(store[a[j]] == 0){
            count++ ; 
        }
        store[a[j]]++ ; 

        cout<<count<<" " ; 
        j++ ; 
    }

    return 0 ; 
}