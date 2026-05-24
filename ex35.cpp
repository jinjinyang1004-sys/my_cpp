#include<iostream>
#include<iomanip>
using namespace std;
double div2(int x) ;

int main(){
    int x ;
    cin>>x ;
    cout<<div2(x)<<endl ;
}

double div2(int x){
    return x/2. ;
}
