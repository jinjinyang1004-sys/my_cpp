#include<bits/stdc++.h>
using namespace std;
int main(){
    string a ;
    cin>>a ;
    for (int i=0 ;i<a.length()-1 ;i++){
        cout<<abs(a[i]-a[i+1]) ;
    }
    cout<<endl ;
}
