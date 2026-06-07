#include<bits/stdc++.h>
using namespace std;
void p(int ar[],int n){
    for (int i=0; i<n; i++){
        cout<<ar[i]<<" " ;
    }
    cout<<endl ;
}

void add_1(int a[], int n){
    for (int i=0; i<n; i++){
        a[i]+=1 ;
    }
}

int main(){
    int a[10]={1,2,3,4,5} ;
    p(a,10) ;
    add_1(a,10) ;
    p(a,10) ;
}
