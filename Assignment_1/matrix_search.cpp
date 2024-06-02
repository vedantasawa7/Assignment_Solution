#include<bits/stdc++.h>
using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    long long n,m,q ; 
    cin>>n>>m>>q ; 

    vector<vector<int>>arr(n, vector<int>(m)) ;

    vector<int>query(q) ;

    for(long long i=0 ; i<n ; i++){
        for(long long j=0 ; j<m ; j++)
        cin>>arr[i][j] ;
    }

    for(long long i=0 ; i<q ;i++){
        cin>>query[i] ; 
    }

    long long k =0 ;
    

    while(q--){
        long long a = query[k] ;
        long long l = -1 ; 
        long long r = n*m ;  

        while(l<r-1){

            long long mid = l + (r-l)/2 ;
            long long ro = mid/m ; 
            long long co = mid%m ;
            if(arr[ro][co] <= a){
                l = mid ;
            }
            else{
                r = mid ;
            }
        }
        long long row = l/m ; 
        long long col = l%m ;
 
        k++ ; 

        cout<<row<<" "<<col<<"\n" ;
    }


    return 0 ; 
}