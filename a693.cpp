#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,l,r ;
    while (cin>>n>>m){
        int a[n+1]={0} ;
        for (int i=1 ;i<=n ;i++){
            int f ;
            cin>>f ;
            a[i]=f+a[i-1] ;
        }
        while(m--){
            cin>>l>>r ;
            cout<<a[r]-a[l-1]<<endl ;
        }
    }
}
