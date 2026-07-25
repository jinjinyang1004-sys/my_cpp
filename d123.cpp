#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0 ;
    while (cin>>n){
        c+=1 ;
        int t=0,r=0,s ;  //t==0 嚴格遞增, r==0 無重複
        int a[n] ;
        int b[20001]={0} ;
        for (int i=0 ;i<n ;i++){
            cin>>a[i] ;
        }
        for (int i=1 ;i<n ;i++){
            if (a[i]<=a[i-1]){
                t=1 ;
                break ;
            }
        }
        for (int i=0 ;i<n ;i++){
            for (int j=i ;j<n ;j++){
                s=a[i]+a[j] ;
                if (b[s]==1){
                    r=1 ;
                    break ;
                }
                else{
                    b[s]=1 ;
                }
            }
            if (r==1) break ;
        }
        if (t==0 && r==0) cout<<"Case #"<<c<<": It is a B2-Sequence."<<endl ;
        else cout<<"Case #"<<c<<": It is not a B2-Sequence."<<endl ;
    }
}

