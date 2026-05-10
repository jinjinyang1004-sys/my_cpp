#include<bits/stdc++.h>
using namespace std;
int main(){
    int max  ;
    cout<<"MAX= " ;
    cin>>max ;
    for (max ;!(max%3==2 && max%5==3 && max%7==2) ;max--) ;
    cout<<max<<endl ;
}

