#include<bits/stdc++.h>
using namespace std;
long long int p(long long int a,long long int b,long long int c){
    return a*c ;
}

int main(){
    long long int n,f,a,b,c,t ;
    cin>>n ;
    for (int i=1; i<=n; i++){
        t=0 ;
        //long long int t=0 ;   宣告在for迴圈外
        cin>>f ;
        for (int j=1; j<=f; j++){
            cin>>a>>b>>c ;
            t+=p(a,b,c) ;
        }
        cout<<t<<endl ;
    }

}
