#include<bits/stdc++.h>
using namespace std;
int main(){
    int y,d,s,f,m ;
    int t=0 ;
    cin>>y>>m>>d ;
    if (y<1970 || !(1<=m && m<=12) || !(1<=d && d<=31)){
        cout<<0<<endl ;
        return 0 ;
    }
    if (m==4 || m==6 || m==9 || m==11){
        if (d==31){
            cout<<0<<endl ;
            return 0 ;
        }
    else if (m==2){
        if ((y%4==0 && y%100!=0)||(y%400==0)) f=29 ;
        else f=28 ;
        if (d>f){
            cout<<0<<endl ;
            return 0 ;
        }
        }
    }
    for (int i=1970 ;i<y ;i++){
        if ((i%4==0 && i%100!=0)||(i%400==0)) t+=366 ;
        else t+=365 ;
    }
    for (int i=1 ;i<m ;i++){
        if (i==2){
            if ((y%4==0 && y%100!=0)||(y%400==0)) f=29 ;
            else f=28 ;
            t+=f ;
        }
        else if (i==4 || i==6 || i==9 || i==11) t+=30 ;
        else t+=31 ;
    }
    t+=d ;
    cout<<t<<endl ;
}

