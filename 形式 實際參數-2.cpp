#include<bits/stdc++.h>
using namespace std;
void test(int j[]){  //形式參數採用位址
    cout<<j<<endl ;
}

int main(){
    int a[10] ;
    cout<<a<<endl ;
    test(a) ;  //實際參數,陣列傳遞採用位址
}
