#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b ;
    int d ;
    while (cin>>a>>b){
        d=b[0]-a[0] ;
        if (d>=0) cout<<d<<endl ;
        else cout<<d+26<<endl ;
    }
}
