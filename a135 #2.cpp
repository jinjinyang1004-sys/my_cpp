#include<bits/stdc++.h>
using namespace std;
int main(){
    map <string,string> mp ;
    mp["HELLO"]="ENGLISH" ;
    mp["HOLA"]="SPANISH" ;
    mp["HALLO"]="GERMAN" ;
    mp["BONJOUR"]="FRENCH" ;
    mp["CIAO"]="ITALIAN" ;
    mp["ZDRAVSTVUJTE"]="RUSSIAN" ;
    string s ;
    int n=0 ;
    cin>>s ;
    while(s!="#"){
        cout<<"Case "<<++n<<": " ;
        if (mp.count(s)) cout<<mp[s]<<endl ;
        else cout<<"UNKNOWN"<<endl ;
        cin>>s ;
    }
}
