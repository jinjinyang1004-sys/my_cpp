#include<iostream>
using namespace std;
int main(){
    int a,x=0 ;
    cin>>a ;
    while (a>0){
        x+=(a%10) ;
        a/=10 ;
    }
    cout<<x<<endl ;
}
