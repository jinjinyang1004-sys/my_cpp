#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,t=0 ;
    vector<int> v ;
    int arr[20] ;
    while (cin>>n){
        v.clear() ;
        t+=1 ;
        cin>>x ;
        for (int i=0 ;i<20 ;i++){
            cin>>arr[i] ;
        }
        for (int i=0 ;i<n ;i++){
            v.push_back(i+1) ;
        }
        for (int i=0 ;i<20 ;i++){
            int die=0 ;
            if (v.size()==x) break ;
            while ((die+arr[i]-1)<v.size()){
                die=die+arr[i]-1 ;
                v.erase(v.begin()+die);
                if (v.size()==x) break ;
            }
        }
            cout<<"Selection #"<<t<<endl ;
            for (int i=0 ;i<v.size() ;i++){
                cout<<v.at(i)<<" " ;
            }
        cout<<endl ;
        cout<<endl ;
    }
}
