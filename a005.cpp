#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    int a[4] ;
    cin>>n ;
    for (int i=1; i<=n; i++){
        for (int k=0; k<4; k++) cin>>a[k] ;
        if (a[1]-a[0]==a[2]-a[1]){
            for (int j=0; j<4; j++){
                cout<<a[j]<<" " ;
            }
            cout<<a[3]+(a[1]-a[0])<<endl ;
        }
        else{
            for (int j=0; j<4; j++){
                cout<<a[j]<<" " ;
            }
            cout<<a[3]*(a[1]/a[0])<<endl ;
        }
    }
}
