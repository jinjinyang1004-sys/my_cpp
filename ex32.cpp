#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=9 ;
    for (int i=0; i<a; i++){
        for (int j=1; j<i+1; j++){
            cout<<" " ;
        }
        for (int j=1; j+i*2<=a; j++){
            cout<<"o" ;
        }
        cout<<endl ;
    }
}
