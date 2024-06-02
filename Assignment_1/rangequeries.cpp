#include<bits/stdc++.h>
using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    long long n,q ; 
    vector<int>arr(n) ; 

    for(long long i=0 ;i<n ; i++){
        cin>>arr[i] ; 
    }

    sort(arr.begin() , arr.end()) ;

    while(q--){
        long long l , r ;
        cin>>l>>r ; 

        long long left = - 1 ; 
        long long right = n ; 

        while(left < right - 1 ){
            long long mid = left + (right - left)/2 ; 
            if(arr[mid] < l ){
                left = mid ; 
            }
            else {
                right = mid ; 
            }
        }
    }

    return 0 ; 
}