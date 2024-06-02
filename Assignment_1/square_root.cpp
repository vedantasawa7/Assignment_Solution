#include<bits/stdc++.h>
using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    long double n ; 
    cin>>n ; 

    long double l = 0 ; 
    long double r = n ; 
    int steps = 150 ; 

    while(steps--){
        long double m = l + (r-l)/2 ; 

        if(m <= n/m){
            l = m ; 
        }
        else{
            r = m ; 
        }
    }

    cout<<fixed<<setprecision(10)<< l <<"\n" ; 
    return 0 ; 
}