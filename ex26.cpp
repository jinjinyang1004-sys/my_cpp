#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    for (int i=2; i<=n; i++){
        if (n%i==0){
            cout<<i<<endl ;
            int d=1 ;
            n=n/i ;
            while (n%i==0){
                d++ ;
                n=n/i ;
            }
            cout<<d<<endl ;
        }
    }
}
