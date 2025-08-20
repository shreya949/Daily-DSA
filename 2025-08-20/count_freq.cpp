#include<bits/stdtr1c++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter how many numbers you want to insert?";
    cin>>n;

    int arr[n];
    cout<<"Numbers=";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precomputing
    unordered_map<int,int> mapp;
    for(int i=0;i<n;i++){
        mapp[arr[i]]++;
    }
    cout<<"[";
    for(auto it:mapp){
        cout<<"["<<it.first<<","<<it.second<<"]";
    }
    cout<<"]";
    // int q;
    // cout<<"Enter how many numbers you want to find count of?";
    // cin>>q;
    // cout<<"Number=";
    // while(q--){
    //     int number;
    //     cin>>number;
    //     cout<<mapp[number]<<endl;
    // }
    return 0;
}