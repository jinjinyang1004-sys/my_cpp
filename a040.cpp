#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=0,n,m,l,k ;
    string a ;
    cin>>n>>m ;
    for (int i=n ;i<m+1 ;i++){
        k=0 ;
        a=to_string(i) ;
        l=a.length() ;
        for (int j=0 ;j<l ;j++){
            k+=pow(a[j]-48,l) ;
        }
        if (k==i){
            t=1 ;
            cout<<i<<" " ;
        }
    }
    if (t==0) cout<<"none" ;
}
