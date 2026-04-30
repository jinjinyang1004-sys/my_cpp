#include<iostream>
using namespace std;
int main(){
    int n ;
    int a,x=0 ;
    cin>>n ;
    for (int i=0;i<n;i++){
        cin>>a ;
        if (a>x) x=a ;
    }
    cout<<x ;
}
