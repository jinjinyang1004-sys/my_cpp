#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a ;
    cout<<"N = " ;
    cin>>a ;
    for (int i=1; i<=a; i++){
        for (int j=a; j>i; j--){
            cout<<" " ;
        }
        for (int j=1; j<=i; j++){
            cout<<"*" ;
        }
        cout<<endl ;
    }
}
