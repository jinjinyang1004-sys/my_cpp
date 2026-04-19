#include<iostream>
using namespace std;
int main(){
    int a=0 ; //0-北, 1-東, 2-南, 3-西
    int t,pt=0,dt ; //t-讀入時間, pt-前一個時間, dp=t-pt
    int o ;
    int x=0, y=0 ;
    while(1){
        cin>>t ;
        dt=t-pt ;
        pt=t ;
        if (a==0){
            y+=dt*10 ;
        }
        else if(a==1){
            x+=dt*10 ;
        }
        else if(a==2){
            y-=dt*10 ;
        }
        else{
            x-=dt*10 ;
        }
        cin>>o ;
        if(o==3){
            break ;
        }
        else if(o==1){
            a-=1 ;
            if(a<0){
                a=3 ;
            }
        }
        else{
            a+=1 ;
            if(a>3){
                a=0 ;
            }
        }
    }
    cout<<x<<endl ;
    cout<<y<<endl ;
}
