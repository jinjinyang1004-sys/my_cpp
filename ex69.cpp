#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v ;
    int n,p,t=0,k=2 ;
    cin>>n>>p ;
    for (int i=1 ;i<=n ;i++){
        v.push_back(i) ;
    }
    while(v.size()>1){
        t+=1 ;
        k+=1 ;
        if (k>v.size()) k=1 ;
        if (t==p){
            v.erase(v.begin()+k-1) ;
            t=0 ;
        }
    }
    cout<<v.at(0) ;
}
