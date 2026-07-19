#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100][100] ;
    int b[100][100] ;
    int n,m ;
    while (cin>>n>>m){
        for (int r=0 ;r<n ;r++){
            for (int c=0 ;c<m ;c++){
                cin>>a[r][c] ;
                b[c][r]=a[r][c] ;
            }
        }
        for (int r=0 ;r<m ;r++){
            for (int c=0 ;c<n ;c++){
                cout<<b[r][c]<<" " ;
            }
            cout<<endl ;
        }
    }
}

