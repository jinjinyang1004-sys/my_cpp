#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b ;
    char op ;
    cin>>a>>op>>b ;
    switch(op){
        case'+':
            cout<<a+b<<endl ;
            break ;
        case'-':
            cout<<a-b<<endl ;
        case'*':
            cout<<a*b<<endl ;
        case'/':
            if (b==0)cout<<"除數不得為0"<<endl ;
            else cout<<(double)a/b<<endl ;
            break;
    }

}

