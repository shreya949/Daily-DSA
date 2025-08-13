#include<iostream>
#include<map>
using namespace std;
void explainmap() {
    //stored in sorted manner and 
    map<int, int> mapp;
    //key-int                value-int pair 
    map<int, pair<int, int>> mapp1;
    //key-int                value-pair<int, int> pair 
    map<pair<int, int>, int> mapp2;
    //key-pair<int, int>      value-int pair 

    mapp[1] = 2;
    mapp.emplace(2, 1);
    mapp.insert({3, 1});
    
    //printing map
    for(auto it:mapp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<mapp[1];
    cout<<mapp[7];
    //return null or zero

    

    
}
int main(){
    explainmap();
    return 0;
}