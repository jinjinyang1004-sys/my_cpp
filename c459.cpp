#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n,d=0,e=0 ;
    string b ;
    cin>>a>>b ;
    stringstream ss ;
    n=b.length() ;
    if (a==10){
        for (int i=0 ;i<=n-1 ;i++){
            d+=pow(b[i]-48,n) ;   //pow(底數,指數)
        }
        ss<<b ;
        ss>>e ;
    }
    else{
        for (int i=0 ;i<=n-1 ;i++){
            d+=pow(a,i)*(b[n-i-1]-48) ;
            e+=pow(b[i]-48,n) ;
        }
    }
    if (d==e) cout<<"YES"<<endl ;
    else cout<<"NO"<<endl ;
}
