#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[101] ;
    int b[101] ;
    for (int i=1 ;i<=100 ;i++){
        b[i]=i ;
    }
    a[0]=0 ;
    for (int i=1 ;i<=100 ;i++){
        a[i]=b[i]+a[i-1] ;
    }
    cout<<a[50]-a[30]<<endl ;
}

