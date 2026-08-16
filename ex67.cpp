#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k ;
    while (cin>>n){
        srand(time(NULL)) ;
        vector<int>v ;
        for (int i=0 ;i<n ;i++){
            k=rand()%n+1 ;
            v.push_back(k) ;
            for (int j=0 ;j<i ;j++){
                if (v.at(j)==k){      //v.at(j) == v[j]
                    v.pop_back() ;
                    i-- ;
                    break ;
                }
            }
        }
        for (int i=0 ;i<n ;i++){
            cout<<v.at(i)<<" " ;
        }
        cout<<endl ;
    }
    return 0 ;
}
