#include<bits/stdc++.h>
using namespace std ; 
#define ll long long  
#define MOD 1000000007

int dp[800][800] ; 

void initialdp(){
    for(int i=0 ; i<800 ; i++){
        for(int j= 0 ; j<800 ; j++){
            dp[i][j] = -1 ; 
        }
    }
}


int wine(int l , int r , vector<ll>& p  ){

    if(r < l) return 0 ; 

    int n = p.size() ; 

    if(dp[l][r] != -1){
        return dp[l][r] ; 
    }
    dp[l][r] = max(wine(l , r-1 , p) + p[r]*(n-r+l) , wine(l+1 , r , p) + p[l]*(n-r+l)) ; 

    return dp[l][r] ; 
}
 
int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    ll n ; 
    cin>>n ; 
    vector<ll>p(n) ;
    for(int i=0 ; i<n ; i++){
        cin>>p[i] ; 
    } 

    initialdp() ; 

    int l = 0 , r = n-1 ; 

    int ans = wine(l , r , p ) ; 

    cout<<ans<<"\n" ; 

    return 0 ; 
}