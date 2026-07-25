#include<bits/stdc++.h>
using namespace std;
int main(){
    int b,n,k,t,r ;
    while (cin>>n){
        int a[n] ;
        int d[n-1] ;
        t=0 ;
        r=0 ;
        for (int i=0 ;i<n ;i++){
            cin>>b ;
            a[i]=b ;
        }
        for (int i=0 ;i<n-1 ;i++){
            d[i]=0 ;
        }
        for (int i=1 ;i<n ;i++){
            k=abs(a[i]-a[i-1]) ;
            if (k<1 || k>(n-1)){
                t=1 ;
                break ;
            }
            else{
                d[k-1]+=1 ;
            }
        }
        for (int i=0 ;i<n-1 ;i++){
            if (d[i]!=1){
                r=1 ;
                break ;
            }
        }
        if (t==0 && r==0) cout<<"Jolly"<<endl ;
        else cout<<"Not jolly"<<endl ;
    }
}

