#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2 ;
    int total=0 ;
    getline(cin,s1) ;
    stringstream ss(s1) ;
    while (ss>>s2){
        total+=stoi(s2) ;
        cout<<s2<<endl ;
    }
    cout<<"Total="<<total<<endl ;
    //
    stringstream s3 ;
    int n=12345 ;
    string op ;
    s3<<n ;  //整數轉成ss
    s3>>op ; //ss轉成字串
    cout<<"字串 = "<<op<<endl ;
    cout<<"長度 = "<<op.size()<<endl ;
    int a=0 ;
    s3.clear() ;  //清除緩存
    s3<<op ;
    s3>>a ;
    cout<<"a = "<<a<<endl ;
}
