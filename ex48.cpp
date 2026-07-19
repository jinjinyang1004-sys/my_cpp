#include<bits/stdc++.h>
using namespace std;
int main(){
    int d[2][3][4] ;
    int a=0 ;
    for (int p=0 ;p<2 ;p++){
        for (int r=0 ;r<3 ;r++){
            for (int c=0 ;c<4 ;c++){
                cout<<setw(2)<<a<<" d["<<p<<"]["<<r<<"]["<<c<<"]"<<"  "<< &d[p][r][c]<<endl ;
                a++ ;
            }
        }
    }
}

