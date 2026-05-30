#include<bits/stdc++.h>
using namespace std;
int isp(int k){
    if (k<=1) return 0 ;
    int isp=1 ;
    for (int j=2; j<=k-1; j++){
        if (k%j==0){
            isp=0 ;
            break ;
        }
    }
    return isp ;
}

int main(){
    int i ;
    int a[10] ;
    for (i=0; i<10 ;i++){
        cin>>a[i] ;
    }
    cout<<"是質數的有:"<<endl ;
    for (int i=0; i<10; i++){
        if (isp(a[i])) cout<<a[i]<<endl ;
    }
}
