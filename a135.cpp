#include<bits/stdc++.h>
using namespace std;
int main(){
    string a[6]={"HELLO","HOLA","HALLO","BONJOUR","CIAO","ZDRAVSTVUJTE"} ;
    string b[6]={"ENGLISH","SPANISH","GERMAN","FRENCH","ITALIAN","RUSSIAN"} ;
    string n ;
    int k=0 ;
    while (cin>>n){
        int t=0 ;
        if (n=="#") break ;
        for (int i=0 ;i<6 ;i++){
            if (n==a[i]){
                k+=1 ;
                cout<<"Case "<<k<<": "<<b[i]<<endl ;
                t=1 ;
                break ;
            }
        }
        if (t==0){
            k+=1 ;
            cout<<"Case "<<k<<": "<<"UNKNOWN"<<endl ;
        }
    }
}
