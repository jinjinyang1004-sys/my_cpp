#include<bits/stdc++.h>
using namespace std;
int main(){
    int array[2][3]={{1,2,3},{4,5,6}} ;
    int array2[][3]={{1,2,3},{4,5,6}} ;
    for (int r=0 ;r<2 ;r++){
        for (int c=0 ;c<3 ;c++){
            cout<<setw(3)<<array[r][c] ;
        }
        cout<<endl ;
    }
}

