#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n ;
    for (int i=1; i<=n; i++){
        string s[10];
        int v[10] ;
        int max=0 ;
        for (int j=0; j<10; j++){
            cin>>s[j] ;
            cin>>v[j] ;
            if (v[j]>max){
                max=v[j] ;
            }
        }
        cout<<"Case #"<<i<<":"<<endl ;
        for (int i=0; i<10; i++){
            if (v[i]==max){
                cout<<s[i]<<endl ;
            }
        }
    }
}
