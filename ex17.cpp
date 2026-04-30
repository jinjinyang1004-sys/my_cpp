#include<iostream>
using namespace std;
int main(){
    int a,b,x=1 ;
    cin>>a>>b ;
    for (int i=0;i<b;i++){
        x*=a ;
    }
    cout<<x<<endl ;
}
