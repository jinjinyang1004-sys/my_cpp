#include<bits/stdc++.h>
using namespace std;
int main(){
    set <int> s ;
    int n,a ;
    cin>>n ;
    for (int i=0 ;i<n ;i++){
        cin>>a ;
        s.insert(a) ;
    }
    cout<<s.size()<<endl ;
    for (int i : s){
        cout<<i<<" " ;
    }
}
