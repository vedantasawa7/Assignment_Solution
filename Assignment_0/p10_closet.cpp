#include<bits/stdc++.h>
using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    long long n ; 
    cin>> n ; 

    vector<long long>arr(n) ;

    for(long long i=0 ; i<n ; i++){
        cin>>arr[i] ;
    }

    vector<int>count(n+2,0) ;

    for(int i=0 ; i<n ; i++){
        if(arr[i] < n+2)
        count[arr[i] ]++ ; 
    }

    long long ans = 0 ; 

    for(int i=1 ; i<n+2 ; i++){
        if(count[i] == 0){
            cout<<i<<"\n" ;
            break ; 
        }
    }
    

    return 0 ; 
}