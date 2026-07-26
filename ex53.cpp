#include<bits/stdc++.h>
using namespace std;
int main(){
    int i ;
    int j ;
    int *a ;   //指標變數
    int *b ;
    i=3 ;
    j=5 ;
    a=&i ;
    b=&j ;
    cout<<"i="<<i<<endl ;
    cout<<"i的位址="<<&i<<endl ;
    cout<<"指標a="<<a<<endl ;
    cout<<"j="<<j<<endl ;
    cout<<"j的位址="<<&j<<endl ;
    cout<<"指標b="<<b<<endl ;
}
