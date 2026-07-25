#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0,t=0 ;
    cin >> n ;
    int a[n] ;
    int b[n]={0} ;
    for (int i=0 ;i<n ;i++){
        cin >> a[i] ;
    }
    sort(a,a+n) ;
    for (int i=0 ;i<n-1 ;i++){
        if (a[i]!=a[i+1]){
            b[s]=a[i] ;
            s+=1 ;
        }
    }
    if (a[n-1]!=a[n-2]) b[s]=a[n-1] ;
    for (int i=0 ;i<n ;i++){
        if (b[i]!=0) t+=1 ;
    }
    cout<<t<<endl ;
    for (int i=0 ;i<t ;i++){
        cout<<b[i]<<" " ;
    }
}
