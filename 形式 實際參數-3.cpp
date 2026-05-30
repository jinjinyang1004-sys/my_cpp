#include<bits/stdc++.h>
using namespace std;
void test(int j[]){  //形式參數採用位址
    cout<<j<<endl ;
    for (int i=0; i<10; i++){
        j[i]++ ;
    }
}

int main(){
    int a[10] ;
    cout<<a<<endl ;
    for (int i=0; i<10; i++){
        a[i]=100 ;
    }
    test(a) ;  //實際參數,陣列傳遞採用位址, call by address
    for (int i=0; i<10; i++){
        cout<<a[i]<<endl ;
    }
}
