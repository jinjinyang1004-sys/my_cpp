#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp ;
    temp=*a ;
    *a=*b ;
    *b=temp ;
}
void swap2(int a,int b){
    int temp ;
    temp=a ;
    a=b ;
    b=temp ;
}
int main(){
    int i,j ;
    cin>>i>>j ;
    cout<<"i="<<i<<"j="<<j<<endl ;
    swap(&i,&j) ;
    cout<<"i="<<i<<"j="<<j<<endl ;

    int t,k ;
    cin>>t>>k ;
    cout<<"t="<<t<<"k="<<k<<endl ;
    swap2(t,k) ;
    cout<<"t="<<t<<"k="<<k<<endl ;
}
