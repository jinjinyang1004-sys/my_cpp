#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    while(cin>>n){
        int t=0,k=0 ;
        double a ;
        vector<int> v(n) ;
        for (int i=0 ;i<n ;i++){
            cin>>v.at(i) ;
            t+=v.at(i) ;
        }
        a=double(t)/n ;
        for (int i=0 ;i<n ;i++){
            if (v.at(i)>a) k+=1 ;
        }
        cout<<"avg = "<<a<<",count = "<<k<<endl ;
    }
}
