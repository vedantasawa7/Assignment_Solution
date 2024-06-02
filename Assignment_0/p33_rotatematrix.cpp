#include<bits/stdc++.h>
using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    long long n ; 
    cin>>n ; 

    vector<vector<int>>matr(n,vector<int>(n)) ;

    for(long long int i=0 ; i<n ; i++){
        for(long long int j=0 ; j<n ; j++){
            cin>>matr[i][j] ;
        }
    }

    for(long long i=0 ; i<n ; i++){
        for(long long j=0 ; j<n ; j++){
            cout<<matr[j][i]<<" " ;
        }
        cout<<"\n" ;
    }


    return 0 ; 
}