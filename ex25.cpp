#include<iostream>
using namespace std;
int main(){
    int d,a,o ; //o原來進制 , d幾位數
    int sum=0 ;
    cin >> o ;
    cin >> d ;
    for (int i=0; i<d; i++){
        cin >>a ;
        sum=sum*o+a ;
    }
    int c[100] ;
    int t,y,s,n=0 ;
    cin>>t ;
    do{
        s=sum/t ;
        y=sum%t ;
        sum=s ;
        c[n]=y ;
        n++ ;
    }
    while(s>0) ;
    for(int i=n-1; i>=0; i--){
    cout<<c[i]<<endl ;
    }
}
