#include<iostream>
#include<iomanip>
using namespace std;
int i=5 ;
int f(){
    i=i+1 ;
    cout<<i<<endl ;
    return 0 ;
}
int main(){
    cout<<i<<endl ;
    int i=6 ;
    i=i+1 ;
    f() ;
    cout<<i<<endl ;
}
