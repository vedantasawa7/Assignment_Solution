#include<bits/stdc++.h>
using namespace std ; 
using ll = long long ; 

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    ll n ;
    cin>>n ; 

    vector<ll>a(n) ;
    for(int i=0 ; i<n ;i++){
        cin>>a[i] ; 
    }

    for(int i=0 ; i<n ; i++){
        if(a[i] == 0){
            a[i] = -1 ; 
        }
    }
    ll sum = 0 ; 
    ll ans = 0  ;

    unordered_map<int,int>count ; 
    count[0] = 1 ; 
    for(int i=0 ; i<n ; i++){

        sum += a[i] ;
        ans += count[sum] ; 


        count[sum]++ ; 
    }

    cout<<ans<<"\n" ; 





    return 0 ; 
}