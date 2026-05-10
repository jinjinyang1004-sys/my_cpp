#include<bits/stdc++.h>
using namespace std;
int main(){
    int max ;
    cout<<"MAX= " ;
    cin>>max ;
    for (int i=1 ;i<=max ;i++){
        if (i%3==2 && i%5==3 && i%7==2)
            cout<<i<<" " ;
    }
    cout<<endl ;
}

