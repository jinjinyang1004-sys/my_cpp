#include<iostream>
using namespace std;
int main(){
    int n ;
    int a ;
    int b ;
    double c ;
    while(cin>>n){
        b=0 ;
        for (int i=0 ;i<n ;i++){
                cin>>a ;
                b+=a ;
        }
        c=(double) b/n ;
        if (c>59) cout<<"no"<<endl ;
        else cout<<"yes"<<endl ;
    }
}
