#include<iostream>
using namespace std;
int main(){
    int y,m ;
    cin>>y>>m ;
    switch(m){
    case 4:case 6:case 9:case 11:
        cout<<"30天"<<endl ;
        break ;
    case 2:
        if ((((y%4)==0) && ((y%100)!=0))||((y%400)==0))
            cout<<"29天"<<endl ;
        else
            cout<<"28天"<<endl ;
        break ;
    degault:
        cout<<"31天"<<endl ;
        break ;
    }
}
