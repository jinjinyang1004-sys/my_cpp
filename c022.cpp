#include<iostream>
using namespace std;
int main(){
    int n ;
    int a,b,x ;
    cin>>n ;
    for (int i=0;i<n;i++){
        cin>>a>>b ;
        x=0 ;
        for (int j=a;j<b+1;j++){
            if (j%2==1) x+=j ;
        }
        cout<<"Case "<<i+1<<": "<<x<<endl ;
    }
}
