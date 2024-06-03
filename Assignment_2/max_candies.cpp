#include<bits/stdc++.h>
using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    long long n ; 
    cin>> n ; 

    long long l = 0 , r = n ;

    while(l<r-1){
        long long m =  l + (r-l)/2 ; 

        if(m*(m+1)/2 <= n){
            l = m ; 
        }
        else {
            r = m ; 
        }
    } 

    cout<<l<<"\n" ;

    return 0 ; 
}