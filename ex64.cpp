#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10] ;
    int x,i ;
    srand((NULL)) ;
    for (int i=0 ;i<10 ;i++){
        a[i]=rand()%100+1 ;
        cout<<a[i]<<" ";
    }
    cout<<endl ;
    sort(a,a+10) ;
    for (int i=0 ;i<10 ;i++){
        cout<<a[i]<<" " ;
    }
    cout<<endl ;
    cin>>x ;
    for (i=0 ;i<10 ;i++){
        if (a[i]==x) break ;
    }
    if (i==10) cout<<"NOT FOUND"<<endl ;
    else cout<<"FIND"<<endl ;
}
