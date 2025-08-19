#include<bits/stdtr1c++.h>
using namespace std;
//triditional method
int stri(char c,string s){
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==c){
            count++;
        }
    }
    return count;
}

//hashing
int main(){
    string s;
    cin>>s;
    
    //precomputing
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
    // cout<<stri('s',"shreyas");
    return 0;
}