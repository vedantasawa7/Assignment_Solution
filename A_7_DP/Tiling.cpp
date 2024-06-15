#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
#define MOD 1000000007

int tile(int n , vector<int>& dp){
    if(n<=2){
        return n ;
    }

    if(dp[n] != -1){
        return dp[n] ; 
    } 
    dp[n] = (tile(n-1, dp)%MOD + tile(n-2, dp)%MOD)%MOD ;
    
    return dp[n] ;
}
 
int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    ll n ; 
    cin>>n ; 

    vector<int>dp(n+1,-1) ;

    int ans = tile(n,dp) ; 
    cout<<ans<<"\n" ; 

    return 0 ; 
}