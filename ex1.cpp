#include<iostream>
using namespace std;
int main(){
    int a ;
    cin>> a ;
    cout<< "個位數為:"<<a%10 <<endl ;
    cout<< "十位數為:"<<(a%100)/10 <<endl ;
    cout<< "百位數為:"<<a/100 ;
}
