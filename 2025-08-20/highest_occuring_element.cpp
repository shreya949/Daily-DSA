#include<bits/stdtr1c++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter:";
    cin>>n;

    int arr[n];
    cout<<"Enter Number=";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int> mapp;
    for(int i=0;i<n;i++){
        mapp[arr[i]]++;
    }

    int high=0,max=0;
    for(auto it:mapp){ 
        if(it.second>high){
            high=it.second;
            max=it.first;
        }  
        else if(it.second==high &&it.first<max){
            max=it.first;
        }
    }
    cout<<max;
    return 0;
}