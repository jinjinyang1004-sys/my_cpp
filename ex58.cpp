#include<bits/stdc++.h>
using namespace std;
int max(int *ptr[],int n){
    int a=-10000 ;
    for (int i=0 ;i<10 ;i++){
        if (*ptr[i]>a) a=*ptr[i] ;
    }
    return a ;
}
int main(){
    int a[10] ;
    int i;
    int *iptr[10] ;
    for (i=0 ;i<10 ;i++){
        cin>>a[i] ;
        iptr[i]=&(a[i]) ;
    }
    cout<<max(iptr,10)<<endl ;
}
