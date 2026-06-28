#include<bits/stdc++.h>
using namespace std;
int main(){
    string f= "a" ;
    f+= 'k' ;
    f+= "boy" ;
    cout<<"f="<<f<<endl ;
    string g= "" ;
    for (int i=0; i<26; i++){
        g+=char(65+i) ;
    }
    cout<<"g="<<g<<endl ;
    cout<<g[0]<<endl ;
    cout<<g[1]<<endl ;
    cout<<g[2]<<endl ;
    cout<<g[3]<<endl ;

    for (auto i:g){
        cout<<i<<" " ;
    }
    cout<<endl ;
    cout<<g.substr(10,5)<<endl ;
    cout<<g.substr(10,-1)<<endl ;

    //to_string() 數字轉字串
    int l=123 ;
    string h ;
    h=to_string(l) ;
    cout<<"h的長度"<<h.size()<<" h="<<h<<endl ;

    //stoi() 字串轉整數  stoll 字串轉長整數
    h="999" ;
    cout<<"h的長度"<<h.size()<<" h="<<h<<endl ;
    cout<<"h加1="<<stoi(h)+1<<endl ;
    h="1234567890123456789" ;
    cout<<"h的長度"<<h.size()<<" h="<<h<<endl ;
    cout<<"h減9="<<stoll(h)-9<<endl ;
}
