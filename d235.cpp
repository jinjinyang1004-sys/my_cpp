#include<bits/stdc++.h>
using namespace std;
int main(){
    string a ;
    int b,c ;
    while (1){
        cin>>a ;
        if (a=="0") break ;
        b=0 ;
        c=a.length() ;
        for (int i=1 ;i<=c-1 ;i+=2){
            b+=a[i-1]-48 ;
            b-=a[i]-48 ;
        }
        if (c%2!=0) b+=a[c-1]-48 ;
        if (abs(b)%11==0) cout<<a<<" is a multiple of 11."<<endl ;
        else cout<<a<<" is not a multiple of 11."<<endl ;
    }
}
