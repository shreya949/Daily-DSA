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
    //precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int q;
    cout<<"Enter how many numbers you want to find?";
    cin>>q;
    while(q--){
        int number;
        cout<<"Number:";
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;
    }
    return 0;
}