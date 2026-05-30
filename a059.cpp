#include<bits/stdc++.h>
using namespace std;
int f(int x){
    double a=sqrt(x) ;
    int b ;
    b=(int)a ;
    if (a-b==0) return 1 ;
    else return 0 ;
}

int main(){
    int n,a,b,k ;
    cin>>n ;
    for (int i=1; i<=n; i++){
        cin>>a>>b ;
        k=0 ;
        for (int j=a; j<=b; j++){
            if (f(j)==1){
                k+=j ;
            }
        }
        cout<<"Case "<<i<<": "<<k<<endl ;
    }
}
