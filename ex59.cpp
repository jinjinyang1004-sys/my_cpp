#include<bits/stdc++.h>
using namespace std;
int add_n(int *iptr,int n){
    if (*iptr==NULL) return 0 ;
    else{
        *iptr+=n ;
        return *iptr ;
    }
}
int main(){
    int a,b ;
    cin>>a>>b ;
    cout<<add_n(&a,b)<<endl ;
}
