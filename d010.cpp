#include<iostream>
using namespace std;
int main(){
    int a ;
    while(cin>>a){
        int s=0 ;
        for (int i=1 ;i<a ;i++){
            if (a%i==0) s+=i ;
        }
        if (s<a) cout<<"虧數"<<endl ;
        else if (s==a) cout<<"完全數"<<endl ;
        else cout<<"盈數"<<endl ;
    }
}

