#include<iostream>
using namespace std;

int main(){
    int a,h,e;
    cout<<"Enter your age: ";
    cin>>a;
    if(a<=20){
        cout<<"Enter yout height: ";
        cin>>h;
        if(h<160) cout<<"UNFRIEND";
        else if(h<175) cout<<"FRIEND";
        else cout<<"Enter your estate :";
        cin>>e;
        if(e>69000000){
            cout<<"MARRIED";
        }else{
            cout<<"ONE NIGHT STAND";
        }
        
    }else{
        if(a<30){
            cout<<"Enter your Estate: ";
            cin>>e;
            if(e>=10000000) cout<<"BEST FRIEND";
            else cout<<"UNFREIND";
        }else{
            cout<<"UNFRIEND";
        }
    }
}

