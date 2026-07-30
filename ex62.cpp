#include<bits/stdc++.h>
using namespace std;
struct student{
    int grade[20] ;
    int count1 ;
};
double average_grade(student *a){
    int n ;
    double t=0 ;
    n=a->count1 ;
    if (n==0) return 0 ;
    else{
        for (int i=0 ;i<n ;i++){
            t+=a->grade[i] ;
        }
        t/=n ;
        return t ;
    }
}
int main(){
    int i ;
    student st ;
    cin>>st.count1 ;
    for (int i=0 ;i<st.count1 ;i++){
        cin>>st.grade[i] ;
    }
    cout<<"Avg="<<fixed<<setprecision(1)<<average_grade(&st)<<endl ; //setprecision(1) == 取到小數點後第1位
}
