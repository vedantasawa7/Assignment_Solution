#include<bits/stdc++.h>
using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    long long n ;
    cin>>n ; 

    vector<long long>arr(n) ;

    for(long long i =0 ; i<n ; i++){
        cin>>arr[i] ;
    }

    long long l = 0 , r = n-1;

    if(arr[n-1] < arr[n-2]){
        cout<<arr[n-1]<<"\n" ; 
    }
    else if (arr[0] < arr[n-1]){
        cout<<arr[0]<<"\n" ;
    }
    else{
        while(l<r-1){
            long long m = l + (r-l)/2 ; 
            if(arr[m] < arr[l]){
                r = m ; 
            }
            else{
                l = m ; 
            }
        }
        cout<<arr[r]<<"\n" ;
    }



    return 0 ; 
}