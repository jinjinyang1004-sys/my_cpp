#include<iostream>
using namespace std;
int main(){
    int n ;
    int a ;
    cin>>n ;
    while (1){
        cin>>a ;
        if (a==0) break ;
        if (a%n==0)
            cout<<(a/n)<<endl ;
        else cout<<(n-a%n)<<endl ;
    }
}
