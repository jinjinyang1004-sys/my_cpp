#include<iostream>
using namespace std;
int main(){
    int n ;
    int a,x=0,y=0,z=0 ;
    cin>>n ;
    for (int i=0;i<n;i++){
        cin>>a ;
        if (a%3==0) x+=1 ;
        else if (a%3==1) y+=1 ;
        else z+=1 ;
    }
    cout<<x<<" "<<y<<" "<<z ;
}
