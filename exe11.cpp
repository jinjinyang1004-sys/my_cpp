#include<iostream>
using namespace std;
int main(){
    int a,s=0 ;
    cin>>a ;
    cout<<"50元x "<<a/50 <<endl ;
    a=a%50 ;
    cout<<"10元x "<<a/10 <<endl ;
    a=a%10 ;
    cout<<"5元x "<<a/5 <<endl ;
    a=a%5 ;
    cout<<"1元x "<<a <<endl ;
}
