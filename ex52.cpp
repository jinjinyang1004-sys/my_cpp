#include<bits/stdc++.h>
using namespace std;
int count1=0 ;
int f(int n){
    int sum=0 ;
    if (n<2) return 0 ;
    for (int i=1 ;i<=n ;i++){
        sum+=i ;
        count1+=1 ;
    }
    sum+=f(2*n/3) ;
    return sum ;
}
int main(){
    f(1000) ;
    cout<<count1 ;
}

