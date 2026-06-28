#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n ;
    cin.ignore() ;
    string s1,s2 ;
    for (int i=1; i<=n; i++){
        int total=0 ;
        getline(cin,s1) ;
        stringstream ss(s1);
        while(ss>>s2){
            total+=stoi(s2) ;
        }
        cout<<total<<endl ;
    }
}
