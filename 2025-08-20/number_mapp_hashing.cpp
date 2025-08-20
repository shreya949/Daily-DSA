#include<bits/stdtr1c++.h>
using namespace std;
//map hashing -strores required elements as index
int main(){
    int n;
    cout<<"Enter how many numbers you want to insert?";
    cin>>n;
    int arr[n];
    cout<<"Numbers=";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precomputing -> key can be a single datatype in unordered
    unordered_map<int,int> mapp;
    for(int i=0;i<n;i++){
        mapp[arr[i]]++;
    }
    //iterate in map
    for(auto it:mapp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cout<<"Enter no you want to find count of?";
    cin>>q;
    while(q--){
        int number;
        cout<<"Number:";
        cin>>number;
        //fetch
        cout<<mapp[number]<<endl;
    }
    return 0;
}