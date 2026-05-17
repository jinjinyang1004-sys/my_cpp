#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=9 ;
    int k=0 ;
    for (int i=1; i<=5; i++){
        for (int j=1; j<=k; j++){
            cout<<" " ;
        }
        for (int j=1; j<=a; j++){
            cout<<"o" ;
        }
        if (i<3){
            a-=2 ;
            k++ ;
        }
        else {
            a+=2 ;
            k-- ;
        }
        cout<<endl ;
    }
}
