#include<bits/stdc++.h>
using namespace std;
int max(int aa[4][4]){
    int m=INT_MIN ;
    for (int i=0 ;i<4 ;i++){
        for (int j=0 ;j<4 ;j++){
            if (aa[i][j]>m) m=aa[i][j] ;
        }
    }
    return m ;
}
int main(){
    int r,c ;
    int a[4][4] ;
    for (r=0 ;r<4 ;r++){
        for (c=0 ;c<4 ;c++){
            cin>>a[r][c] ;
        }
    }
    cout<<"max="<<max(a)<<endl ;
}

