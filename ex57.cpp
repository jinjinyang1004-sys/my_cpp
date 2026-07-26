#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5] ;
    int i ;
    int *ptr ;
    for (i=0 ;i<5 ;i++) cin>>a[i] ;
    for (i=0,ptr=a ;i<5 ;i++,ptr++){
        cout<<ptr<<endl ;
        *ptr+=3 ;
    }
    for (i=0 ;i<5 ;i++) cout<<"a["<<i<<"]="<<a[i]<<endl ;
}
