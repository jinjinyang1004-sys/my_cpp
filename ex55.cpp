#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,k ;
    int *a,*b ;
    cin>>i ;
    a=&i ;
    b=a ;
    cout<<"&i="<<&i<<endl ;
    cout<<"&k="<<&k<<endl ;
    cout<<"&a="<<&a<<endl ;
    cout<<"&b="<<&b<<endl ;
    cout<<"i="<<i<<endl ;
    cout<<"a="<<a<<endl ;
    cout<<"b="<<b<<endl ;
    *a=8 ;
    cout<<"i="<<i<<endl ;
    k=*b+3 ;
    cout<<"k="<<k<<endl ;
}
