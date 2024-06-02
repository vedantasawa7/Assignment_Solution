#include<bits/stdc++.h>
using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    long long n , m ; 
    cin>>n>>m ; 

    vector<vector<long long>>matrix(n,vector<long long>(m));

    for(long long i=0 ; i<n; ++i){
        for(long long j=0 ; j<m ; ++j){
            cin>>matrix[i][j] ;
            cout<<"ok"<<"\n" ;
        }
    }



    return 0 ; 
}