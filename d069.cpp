#include<iostream>
using namespace std;
int main(){
    int a ;
    int b ;
    cin>>a ;
    for(int i=0;i<a;i++){
        cin>>b ;
        if ((b%4==0 && b%100!=0)||(b%400==0)) cout<<"a leap year"<<endl ;
        else cout<<"a normal year"<<endl ;
    }
}
