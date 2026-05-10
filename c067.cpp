#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    int a ;
    int s ;
    int t ;
    int k=0 ;
    cin>>n ;
    while(n!=0){
        vector<int>v(n) ;
        s=0 ;
        for (int i=0 ;i<n ;i++){
            cin>>v[i] ;
            s+=v[i] ;
        }
    a=s/n ;
    t=0 ;
    for (int i=0 ;i<n ;i++){
        t+=abs(v[i]-a) ;
    }
    t/=2 ;
    cout<<"Set #"<<++k<<endl ;
    cout<<"The minimum number of moves is "<<t<<"."<<endl<<endl ;
    cin>>n ;
    }
}

