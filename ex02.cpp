#include<iostream>
using namespace std;
int main(){
    int x1,x2,y1,y2 ;
    cin>>x1>>x2>>y1>>y2 ;
    cout<<"面積為:"<<abs(x1-x2)*abs(y1-y2) ;
    cout<<"週長為:"<<(abs(x1-x2)+abs(y1-y2))*2 ;
}
