#include<bits/stdc++.h>
using namespace std;
int main(){
    int z,l,i,m,k=0 ;
    while (1){
        int a[10000]={0} ;
        int t=0 ;
        cin>>z>>i>>m>>l ;
        if (z==0 && i==0 && m==0 && l==0) break ;
        else {
            while (a[l]==0){
                t+=1 ;
                a[l]=t ;
                l=(z*l+i)%m ;
            }
        }
        k+=1 ;
        cout<<"Case "<<k<<": "<<t-a[l]+1<<endl ;
    }
}

