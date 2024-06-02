#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n ; 
    cin>>n ; 

    vector<long long>arr(n) ;

    for(long long i=0 ; i<n ;i++){
        cin>>arr[i] ;
    }

    vector<long long>pref(n) ;
    pref[0] = arr[0] ;
    for(long long i=1 ; i<n ; i++){
        pref[i] = pref[i-1] + arr[i] ; 
    }

    long long q ; 
    cin >>q ; 

    while(q--){
        long long l , r ;
        cin>>l>>r ; 
        if(l == 1){
            cout<<pref[r-1] <<"\n"; 
        }
        else{
            cout<<pref[r-1] - pref[l-2]<<"\n" ;
        }

    }
    return 0;
}