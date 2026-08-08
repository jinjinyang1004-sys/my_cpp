#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0) ;
    cin.tie(0) ;
    clock_t t1,t2 ;
    t1=clock() ;
    for (int i=0 ;i<1000000000 ;i++) ;
    t2=clock() ;
    cout<<"Time from t1 to t2 = "<<(float)(t2-t1)/CLOCKS_PER_SEC<<endl ;
}
