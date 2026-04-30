#include<iostream>
using namespace std;
int main(){
    int a,b,c,d ;
    int x,y ;
    while (1){
        cin >>a>>b>>c>>d ;
        if (a==0 && b==0 && c==0 && d==0) break ;
        x=a*60+b ;
        y=c*60+d ;
        if (y>=x) cout<< y-x<<endl ;
        else cout<<24*60+y-x<<endl ;
    }
}
