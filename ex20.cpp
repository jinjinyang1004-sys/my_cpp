#include<iostream>
using namespace std;
int main(){
    int a,b ;
    cin>>a>>b ;
    int t ; //餘數
    while(1){
        t=a%b ;
        if(t==0){
            cout<<b<<endl ;
            break ;
        }
        a=b ;
        b=t ;
    }
}
