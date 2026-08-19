#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,now=-1,ans=0 ;
    cin>>t>>n ;
    t=t*60 ;
    int a[600]={0} ; //店員服務總時間
    int b[200] ;   //顧客到達時間
    int c[200] ;   //顧客服務時間
    for (int i=0 ;i<n ;i++){
        cin>>b[i]>>c[i] ;
    }
    for (int i=0 ;i<n ;i++){
        if (now>=t) break ;
        if (now<=b[i]){
            now=b[i]+c[i] ;
            for (int j=b[i] ;j<b[i]+c[i] ;j++){
                if (j>=t) break ;
                a[j]=1 ;
            }
        }
        else{
            for (int j=now ;j<now+c[i] ;j++){
                if (j>=t) break ;
                a[j]=1 ;
            }
            now=now+c[i] ;
        }
    }
    for (int i=0 ;i<t ;i++){
        if (a[i]==0){
            ans+=1 ;
        }
    }
    cout<<ans ;
}
