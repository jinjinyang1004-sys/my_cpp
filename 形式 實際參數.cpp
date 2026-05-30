#include<bits/stdc++.h>
using namespace std;
void test(int j){  //形式參數j與實際參數是不一樣的地址
    j++ ;
    cout<<j<<endl ;
    cout<<&j<<endl ;
}

int main(){
    int i=0 ;
    cin>>i ;
    cout<<i<<endl ;  //印出i的值
    cout<<&i<<endl ; //印出i的地址
    test(i) ;  //實際參數i
    cout<<i<<endl ;
}
