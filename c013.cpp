#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b ;
    cin>>n ;
    while (cin>>a>>b){
        for (int i=0 ;i<b ;i++){
            int t=0 ;
            for (int j=0 ;(j<a*2-1) ;j++){
                if (j<a) t+=1 ;
                else t-=1 ;
                for (int k=0 ;k<t ;k++){
                    cout<<t ;
                }
                cout<<endl ;
            }
            cout<<endl ;
        }
    }
}
