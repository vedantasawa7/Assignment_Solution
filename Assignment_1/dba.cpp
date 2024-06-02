#include<bits/stdc++.h>
using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    long long n , q ; 
    cin>>n>>q ; 

    vector<long long>arr(n) ;
    vector<long long>query(q) ;

    for(long long i=0 ; i<n ; i++){
        cin>>arr[i] ; 
    }

    for(long long i=0 ; i<q ; i++){
        cin>>query[i] ; 
    }

    long long i =0 ; 
    while(q--){
        long long a = query[i] ;

        long long l = -1 ;
        long long r = n ; 

        while(l<r-1){
            long long m = l + (r-l)/2 ; 
            if(arr[m] <= a){
                l = m ; 
            }
            else{
                r = m ; 
            }
        }

        cout<<l<<"\n" ; 

        i++ ; 

    }

    return 0 ; 
}