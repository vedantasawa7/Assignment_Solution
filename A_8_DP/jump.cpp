#include<bits/stdc++.h>
using namespace std ; 
#define ll long long  
#define MOD 1000000007

int dp[301][5001] ;

void intialisedp(){
    for(int i=0 ; i<301 ; i++){
        for(int j=0 ; j<5001 ; j++){
            dp[i][j] = -1 ; 
        }
    }
}

bool check(int k ,int sum, vector<ll>&a ){

    if(sum == 0 ) return true ;
    if(k == -1) return false ; 
    
    if(sum < 0 ) return false ; 

    int incl = sum - a[k]  ; 
    int excl = sum ; 

    if(dp[k][sum] != -1) return dp[k][sum] ; 

    dp[k][sum] = (check(k-1,incl,a) || check(k-1,excl,a)) ;

    return dp[k][sum] ; 
    
}
 
int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    int t ; 
    cin>>t ; 

    while(t--){
        int n ,s;
        cin>>n>>s ; 

        vector<ll>a(n) ;

        for(int i=0 ; i<n ; i++){
            cin>>a[i] ; 
        }

        intialisedp() ;
        int k =  n-1 ;
        int sum = s ;  

        bool done = check(k,sum , a ) ; 

        if(done){
            cout<<"YES"<<"\n" ; 
        }
        else{
            cout<<"NO"<<"\n" ; 
        }


    }

    return 0 ; 
}