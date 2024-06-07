#include<bits/stdc++.h>
using namespace std ; 
using ll = long long ; 

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    ll n,k ;
    cin>>n>>k ; 
    vector<ll>a(n) ;

    for(int i=0 ; i<n ; i++){
        cin>>a[i] ; 
    }

    vector<ll>b(n) ;
    ll j =0 ; 
    for(int i=k ; i<n;i++){
        b[j] = a[i] ;
        j++ ;
    }

    for(int i=0; i<k ; i++){
        b[j] = a[i] ; 
        j++ ;
    }

    for(int i=0 ; i<n ; i++){
        cout<<b[i]<<" " ; 
    }


    return 0 ; 
}