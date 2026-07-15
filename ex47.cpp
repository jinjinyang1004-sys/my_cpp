#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[3][3] ;
    for (int i=0 ;i<3 ;i++){
        for (int j=0 ;j<3 ;j++){
            cout<<a+i*3+j<<"  "<<a[i][j]<<" a["<<i<<"]["<<j<<"]"<<endl ;
        }
        cout<<endl ;
    }
}
