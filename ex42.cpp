#include<bits/stdc++.h>
using namespace std;
//回傳兩數字的最大公因數 gcd
int gcd(int a,int b){
    int k ;
    while (a%b!=0){
        k=a%b ;
        a=b ;
        b=k ;
    }
    return b ;
}
int main(){
    int n ;
    cin >> n ;
    int ar[100] ;
    for (int i=0; i<n; i++) cin>>ar[i] ;
    int total=0 ;
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (gcd(ar[i],ar[j])==1){
                total+=1 ;
                //cout<<i<<" "<<j<<endl ;
            }
        }
    }
    cout<<total<<endl ;
}
