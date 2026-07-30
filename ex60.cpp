#include<bits/stdc++.h>
using namespace std;
struct student{
    string name ;   //char name[20] ;
    int id ;
    string phone ;
    double grade[4] ;
    int birth_year ;
    int birth_month ;
    int birth_day ;
};
int main(){
    student a={"Eddie",12345,"0989123123",{99,98,97.5,96},2007,10,04};
    student *p=&a ;
    /*a.name="Eddie" ;  //strcpy(a.name,"Eddile")
    a.id=12345 ;
    a.grade[0]=98.5 ;
    a.grade[1]=40 ;
    a.phone="0989-123123" ;
    cout<<a.name<<endl ;
    cout<<a.id<<endl ;
    cout<<a.phone<<endl ;
    for (int i=0 ;i<4 ;i++){
        cout<<a.grade[i]<<endl ;
    }*/
    cout<<p->name<<endl ;
    cout<<p->id<<endl ;
    cout<<p->phone<<endl ;
    for (int i=0 ;i<4 ;i++){
        cout<<p->grade[i]<<endl ;
    }
}
