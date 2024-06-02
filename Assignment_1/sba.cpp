#include<bits/stdc++.h>
using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    long long n ; 
    cin>>n ; 

    vector<int>binary(n) ;

    for(long long i=0 ; i<n ; i++){
        cin>>binary[i] ;
    }

    long long l = -1 , r = n ; 
    long long m ; 

    while(l < r-1){
        m = l + (r-l)/2 ; 

        if(binary[m] == 0){
            l = m ; 
        }
        else{
            r = m ; 
        }

    }

    cout<<r<<" "<<l<<"\n" ;
    

    return 0 ; 
}