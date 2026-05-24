#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double f(int a,int b,int c){
    return sqrt(b*b-4*a*c) ;
}
int main(){
    int a,b,c ;
    double t ;
    cin>>a>>b>>c ;
    if ((b*b-4*a*c)<0) cout<<"No real root"<<endl ;
    else {
        t=f(a,b,c) ;
    if (t==0) cout<<"Two same roots x="<<((-1)*b)/(2*a)<<endl ;
    else cout<<"Two different roots x1="<<((-1)*b+t)/(2*a)<<" , "<<"x2="<<((-1)*b-t)/(2*a)<<endl ;
    }

}
