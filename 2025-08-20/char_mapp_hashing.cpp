#include<bits/stdtr1c++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter String";
    cin>>s;
    //precomputing
    map<char,int> mapp;
    for(int i=0;i<s.size();i++)
    {
        mapp[s[i]]++;
    }
    for(auto it:mapp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cout<<"Enter no you want to find count of?";
    cin>>q;
    while(q--){
        char number;
        cout<<"Number:";
        cin>>number;
        //fetch
        cout<<mapp[number]<<endl;
    }
    // cout<<stri('s',"shreyas");
    return 0;
}