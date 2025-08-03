#include<iostream>
#include <vector>
using namespace std;
void explainvector(){
    vector<int> v={10,20,30,40,50};

    // -----Ways of add elements in vector----------
        // vector<int> v;
        // v.push_back(1);                             //inserts value inside vactor (dynamically also)
        // v.emplace_back(2);                          //insert value dynamically inside vector
        // v.emplace_back(3);
        // v.emplace_back(4);
        
        // vector< pair<int, int> > vec;
        // vec.push_back({10,20});                     //never insert value without curly braces throw error
        // vec.emplace_back(30,40);                    //insert value without curly braces assuming pair

        // vector<int> v1(5,100);                      //5 compartments with value 100
        // vector<int> v2(5);                          //5 compartments with value 0 or garbage value
        // vector<int> v3(v1);                         //create copy of v1

    // -----Ways of accessing elements in vector----------
        // 1) Like an array
        // vector<int> v={10,20,30,40,50};
        // cout<<v[0];
        // cout<<v[1];
        // cout<<v[2];

        // 2) Using Iterator                        ex:{10,20,30,40,50}
        // vector<int>::iterator it=v.begin();      // begin itration from first element
        // it++;
        // cout<<*(it)<<" ";                        // will print 20
        // it +=2;
        // cout<<*(it)<<" ";                        // will print 40
        
        // vector<int>::iterator it=v.end();        // begin itration from last element
        // it--;
        // cout<<*(it)<<" ";                        // will print 50
        // it -=2;
        // cout<<*(it)<<" ";                        // will print 30
        
        // 3) Using Iterator and for, for each loop
        // for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        //     cout<<*(it)<<" ";
        // }

        // for(auto it=v.begin();it!=v.end();it++){
        //     cout<<*(it)<<" ";
        // }

        // for(auto it:v){
        //     cout<<it<<" ";
        // }
    
    
}
int main(){
    explainvector();
    return 0;
}