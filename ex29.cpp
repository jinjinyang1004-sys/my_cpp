#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a ;
    cout<<"N = " ;
    cin>>a ;
    for (int i=1; i<=a; i++){
        for (int j=1; j<=a; j++){
            if (i==1 || i==a || j==1 || j==a) cout<<"*" ;
            else cout<<" " ;
        }
        cout<<endl ;
    }
}
